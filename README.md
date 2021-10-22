# Programmation Dynamique

**Sommaire** :

1. Explications
2. Installation
3. Documentation

## Explications
### Recherche par dichotomie
Les algorithmes de recherche entrent dans cette catégorie. Leur rôle est de déterminer si une donnée est présente et, le cas échéant, d’en indiquer sa position, pour effectuer des traitements annexes. La recherche d’une information dans un annuaire illustre cette idée. On cherche si telle personne est présente dans l’annuaire afin d’en déterminer l’adresse. 
Dans notre projet, la recherche dichotomique permet de traiter efficacement des données représentées dans un tableau de façon ordonnée.
### Problème du sac à dos
Le problème du sac à dos, noté également KP (en anglais, Knapsack problem) est un problème d'optimisation combinatoire. Il modélise une situation analogue au remplissage d'un sac à dos, ne pouvant supporter plus d'un certain poids, avec tout ou partie d'un ensemble donné d'objets ayant chacun un poids et une valeur. Les objets mis dans le sac à dos doivent maximiser la valeur totale, sans dépasser le poids maximum.
### Problème du plus grand carré libre
On considère le problème suivant: étant donné une image monochrome n x n (ou une matrice),
il faut en déterminer le plus grand carré blanc, qui ne contient aucun point noir.

![pgcb](https://user-images.githubusercontent.com/57684366/138501041-0fb8cde6-9a7e-4e96-a315-3fa80350699a.png)




## Installation
  - **Installation des dépendances pour le Makefile** 
	  - Installation de *snapd* pour pouvoir obtenir la dernière version de *cmake* `apt install snapd`
	  - Installation de *cmake* `snap install cmake`
	  - Si cela ne fonctionne pas `apt install cmake` ou téléchargement directement sur la platforme https://cmake.org/download/
	  
- **Installation du projet**

	- *Linux* :
	  * Cloner le projet ``git clone https://github.com/hbourget/ProgDyn.git``
	  * Se placer dans le dossier build du répertoire de ProgDyn `cd <racineProgDyn/build>`
	     * Générer le Makefile `cmake ../`
	     * Générer le fichier exécutable  ``make`` 
	     * Lancer le programme `./ProgDyn`

	- *Windows (MinGW)* :
		
		- Cloner le projet ``git clone https://github.com/hbourget/ProgDyn.git``
		 - Se placer dans le dossier build du répertoire de ProgDyn `cd <racineProgDyn/build>`
		     * Générer le Makefile `cmake -G "MinGW Makefiles" ../`
		     * Générer le fichier exécutable  ``mingw32-make`` 
		     * Lancer le programme `ProgDyn.exe`

 

## Documentation Doxygen
Il est possible de générer la documentation technique de ce projet avec [Doxygen](https://www.doxygen.nl/index.html) en suivant le protocole suivant :

* **Windows**
  * Installation de Doxygen (Ne pas oublier d'ajouter Doxygen dans le PATH windows)
    * [Sourceforge](https://sourceforge.net/projects/doxygen/files/rel-1.9.2/)
  * Génération de la documentation depuis le dossier build
    * `mingw32-make documentation`


* **Linux**
  * Installation de Doxygen  ``apt install doxygen``
  * Génération de la documentation depuis le dossier build ``make documentation``

La documentation est généré sous format HTML. Pour la lire, il suffit d'ouvrir le fichier ``index.html`` situer dans le dossier **documentation** qui vient d'être créé à la racine du projet par Doxygen.
