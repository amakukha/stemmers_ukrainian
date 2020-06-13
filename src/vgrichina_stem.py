#!/usr/bin/env python3

# Stemmer for the Ukrainian language.
# Author: Vladimir Grichina (vgrichina), 2013, MIT licence.
#     https://github.com/vgrichina/ukrainian-stemmer
# Ported from Groovy to Python by Andrii Makukha.

STRESS = ' ́'.lstrip()

wends = """
  а ам ами ах та
  в вав вавсь вався вала валась валася вали вались валися вало валось валося вати ватись ватися всь вся
  е еві ем ею
  є ємо ємось ємося ється єте єтесь єтеся єш єшся єю
  и ив ий ила или ило илося им ими имо имось имося ите итесь итеся ити ить иться их иш ишся
  й ймо ймось ймося йсь йся йте йтесь йтеся
  і ів ій ім імо ість істю іть
  ї
  ла лась лася ло лось лося ли лись лися
  о ові овував овувала овувати ого ої ок ом ому осте ості очка очкам очками очках очки очків очкові очком очку очок ою
  ти тись тися
  у ував увала увати
  ь
  ці
  ю юст юсь юся ють ються
  я ям ями ях
""".strip().split()

# WAT ?
# к ка кам ками ках ки кою ку
# ні ню ня ням нями нях
wends.sort(key=lambda x: -len(x))

# endings in unchangeable words

skip_ends = """
  ер
  ск
""".strip().split()

skip_ends.sort(key=lambda x: -len(x)) 

# endings are changing
change_endings = {
  "аче" : "ак",
  "іче" : "ік",
  "йовував" : "йов", "йовувала" : "йов", "йовувати" : "йов",
  "ьовував" : "ьов", "ьовувала" : "ьов", "ьовувати" : "ьов",
  "цьовував" : "ц", "цьовувала" : "ц", "цьовувати" : "ц",
  "ядер" : "ядр",
}

# words to skip
stable_exclusions = set("""
  баядер беатріче
  віче
  наче неначе
  одначе
  паче
""".strip().split())

# words to replace
exclusions = {
  "відер" : "відр",
  "був" : "бува",
}


def stem(word):
    # normalize word
    word = word.replace(STRESS,'')      # remove stress symbol

    # don't change short words
    if len(word) <= 2:
        return word

    # check for unchanged exclusions
    if word in stable_exclusions:
        return word

    # check for replace exclusions
    if word in exclusions:
        return exclusions[word]

    # changing endings
    # TODO order endings by abc DESC
    for eow, rep in sorted(change_endings.items(), key=lambda x: x[1]):
        if eow and word.endswith(eow):
            return word[:-len(eow)] + rep

    # match for stable endings
    for eow in skip_ends:
        if word.endswith(eow):
            return word

    # try simple trim
    for eow in wends:
        if eow and word.endswith(eow):
            trimmed = word[:-len(eow)]
            if len(trimmed) > 2:
                return trimmed

    return word

if __name__=='__main__':
    import sys
    for line in sys.stdin:
        arr = line.rstrip().split(';')
        arr = map(stem, arr)
        print (';'.join(arr))
