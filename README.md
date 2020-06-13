Comparison of stemmers for the Ukrainian language
--

| Stemmer | Languages | UI | OI | ERRT |
| --- | :---: | :---: | :---: | :---: |
| *Dictionary-based (reference)* | – | 0.0172 | 3.59e-06 | **0.0244** |
| tree\_stem | Python | 0.100 | 2.60e-06 | **0.139** |
| pymorphy2 | [Python](https://github.com/kmike/pymorphy2) | 0.324 | 2.01e-07 | **0.391** |
| vgrichina | [Groovy](https://github.com/vgrichina/ukrainian-stemmer) | 0.497 | 1.05e-06 | **0.651** |
| drupal | [JS](https://github.com/titarenko/ukrstemmer), [Python](https://github.com/Desklop/Uk_Stemmer) | 0.511 | 7.54e-07 | **0.666** |
| tochytskyi [\[1\]](http://ekmair.ukma.edu.ua/bitstream/handle/123456789/12541/Hlybovets_Tochytskyi_Alhorytm_tokenizatsii.pdf?sequence=1&isAllowed=y) | [PHP](https://github.com/tochytskyi/ukrstemmer) | 0.623 | 5.72e-07 | **0.795** |
| *No stemming* | – | 1.00 | 1.69e-08 | – |

where:

 - *UI* – understemming index
 - *OI* – overstemming index
 - *ERRT* – error rate relative to truncation

References
--

 - Paice, C. (1994). [An Evaluation Method for Stemming Algorithms](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.89.9560&rep=rep1&type=pdf). *Proceedings of the 17th Annual International ACM SIGIR Conference on Research and Development in Information Retrieval*, 42-50.

