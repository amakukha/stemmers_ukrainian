# Stemmers for Ukrainian

This repository introduces a new stemmer for the Ukrainian language (*tree_stem*) created via machine learning. It outperforms all other stemmers available to date as well as some lemmatizers by the error rate relative to truncation (ERRT) (Paice 1994). It also has the lowest percentage of understemming errors compared to the available stemming algorithms.

The proposed algorithm does not use dictionary lookups while maintaining a reasonably small size (48 KB of Python bytecode). It works faster than lemmatization approach by a factor of x24, and outperforms other stemming algorithms in speed as well.

In addition to the new algorithm, this repository also contains Python ports of some of the previously published stemmers.

Comparison of stemmers for the Ukrainian language
--

| Stemmer | Languages | UI | OI | ERRT |
| --- | :---: | :---: | :---: | :---: |
| *Dictionary-based (reference)* | – | 0.0172 | 3.59e-06 | **0.0244** |
| tree\_stem | [Python](https://github.com/amakukha/stemmers_ukrainian/blob/master/src/tree_stem.py) | **0.0907** | 2.71e-06 | <ins>**0.125**</ins> |
| pymorphy2 ([Paper](https://link.springer.com/chapter/10.1007%2F978-3-319-26123-2_31)) | [Python](https://github.com/kmike/pymorphy2) | 0.324 | **2.01e-07** | **0.391** |
| stemka | [C++](http://www.keva.ru/stemka/stemka.html) | 0.329 | 2.34e-06 | **0.447** |
| tapkomet | [Snowball, Java](https://github.com/Tapkomet/UAStemming) | 0.447 | 2.73e-06 | **0.603** |
| vgrichina | [Groovy](https://github.com/vgrichina/ukrainian-stemmer), [Python](https://github.com/amakukha/stemmers_ukrainian/blob/master/src/vgrichina_stem.py) | 0.497 | 1.05e-06 | **0.651** |
| drupal | [JS](https://github.com/titarenko/ukrstemmer), [Python](https://github.com/Desklop/Uk_Stemmer) | 0.511 | 7.54e-07 | **0.666** |
| tochytskyi ([Paper](http://ekmair.ukma.edu.ua/bitstream/handle/123456789/12541/Hlybovets_Tochytskyi_Alhorytm_tokenizatsii.pdf?sequence=1&isAllowed=y)) | [PHP](https://github.com/tochytskyi/ukrstemmer), [Python](https://github.com/amakukha/stemmers_ukrainian/blob/master/src/tochytskyi_stem.py) | 0.623 | 5.72e-07 | **0.795** |
| *No stemming* | – | 1.00 | 1.69e-08 | – |

where:

 - *UI* – understemming index
 - *OI* – overstemming index
 - *ERRT* – error rate relative to truncation

Notes:

 - *pymorphy2* is a dictionary-assisted lemmatizer and morphological analyzer which was included into this comparison for reference. The most probable normal form is used as a stem.
 - training and testing was performed on a dictionary of word forms.
 
References
--

 - Paice, C. (1994). [An Evaluation Method for Stemming Algorithms](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.89.9560&rep=rep1&type=pdf). *Proceedings of the 17th Annual International ACM SIGIR Conference on Research and Development in Information Retrieval*, 42-50.

