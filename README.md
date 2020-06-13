This repository introduces a new stemmer for the Ukrainian language (*tree_stem*) created via machine learning. It outperforms all other stemmers available to date as well as some lemmatizers by the error rate relative to truncation (ERRT) (Paice 1994). It also has the lowest percentage of undestemming errors compared to the available stemming algorithms.

The proposed algorithm algorithm does not use dictionary lookups while maintaining a reasonably small size (90 KB of Python bytecode). It works faster the lemmatization approach by a factor of x24, and outperforms other stemming algorithms in speed as well.

In addition to the new algorithm, this repository also contains Python ports of some of the previously available stemmers.

Comparison of stemmers for the Ukrainian language
--

| Stemmer | Languages | UI | OI | ERRT |
| --- | :---: | :---: | :---: | :---: |
| *Dictionary-based (reference)* | – | 0.0172 | 3.59e-06 | **0.0244** |
| tree\_stem | [Python](https://github.com/amakukha/stemmers_ukrainian/blob/master/src/tree_stem.py) | 0.100 | 2.60e-06 | **0.139** |
| pymorphy2 [\[1\]](https://link.springer.com/chapter/10.1007%2F978-3-319-26123-2_31) | [Python](https://github.com/kmike/pymorphy2) | 0.324 | 2.01e-07 | **0.391** |
| vgrichina | [Groovy](https://github.com/vgrichina/ukrainian-stemmer), [Python](https://github.com/amakukha/stemmers_ukrainian/blob/master/src/vgrichina_stem.py) | 0.497 | 1.05e-06 | **0.651** |
| drupal | [JS](https://github.com/titarenko/ukrstemmer), [Python](https://github.com/Desklop/Uk_Stemmer) | 0.511 | 7.54e-07 | **0.666** |
| tochytskyi [\[2\]](http://ekmair.ukma.edu.ua/bitstream/handle/123456789/12541/Hlybovets_Tochytskyi_Alhorytm_tokenizatsii.pdf?sequence=1&isAllowed=y) | [PHP](https://github.com/tochytskyi/ukrstemmer), [Python](https://github.com/amakukha/stemmers_ukrainian/blob/master/src/tochytskyi_stem.py) | 0.623 | 5.72e-07 | **0.795** |
| *No stemming* | – | 1.00 | 1.69e-08 | – |

where:

 - *UI* – understemming index
 - *OI* – overstemming index
 - *ERRT* – error rate relative to truncation

Note that *pymorphy2* is a lemmatizer which was included into this comparison for reference. The most probable normal form is used instead of a stem.

References
--

 - Paice, C. (1994). [An Evaluation Method for Stemming Algorithms](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.89.9560&rep=rep1&type=pdf). *Proceedings of the 17th Annual International ACM SIGIR Conference on Research and Development in Information Retrieval*, 42-50.

