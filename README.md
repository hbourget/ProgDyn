# ProgDyn

**Sommaire** :

1. Explication des algorithmes
2. Installation
3. Générer la documentation Doxygen

## Explications
### Recherche par dichtomie
Les algorithmes de recherche entrent dans cette catégorie. Leur rôle est de déterminer si une donnée est présente et, le cas échéant, d’en indiquer sa position, pour effectuer des traitements annexes. La recherche d’une information dans un annuaire illustre cette idée. On cherche si telle personne est présente dans l’annuaire afin d’en déterminer l’adresse. 
Dans notre projet, la recherche dichotomique permet de traiter efficacement des données représentées dans un tableau de façon ordonnée.
### Problème du sac à dos
Le problème du sac à dos, noté également KP (en anglais, Knapsack problem) est un problème d'optimisation combinatoire. Il modélise une situation analogue au remplissage d'un sac à dos, ne pouvant supporter plus d'un certain poids, avec tout ou partie d'un ensemble donné d'objets ayant chacun un poids et une valeur. Les objets mis dans le sac à dos doivent maximiser la valeur totale, sans dépasser le poids maximum

## Installation
  * Cloner le projet ``git clone https://github.com/hbourget/ProgDyn.git``
  * Générer le fichier exécutable dans le répertoire
    * Windows : ``mingw32-make``
    * Linux : ``sudo make`` 
    
## Documentation Doxygen
Il est possible de générer la documentation technique de ce projet avec [Doxygen](https://www.doxygen.nl/index.html) en suivant le protocole suivant :

* **Windows**
  * Installation de Doxygen (Ne pas oublier d'ajouter Doxygen dans le PATH windows)
    * [Sourceforge](https://sourceforge.net/projects/doxygen/files/rel-1.9.2/)
  * Génération de la documentation depuis la racine d'installation de DataStructure
    * `mingw32-make documentation`
   

* **Linux**
  * Installation de Doxygen 
    * ``apt-get install doxygen``
  * Génération de la documentation depuis la racine de ProgDyn
    * ``make documentation``

La documentation est généré sous format HTML. Pour la lire, il suffit d'ouvrir le fichier ``index.html`` situer dans le dossier **doc** qui vient d'être créé par Doxygen.
