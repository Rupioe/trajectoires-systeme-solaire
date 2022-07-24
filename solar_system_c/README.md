# Projet C de fin d'année 2022
## Présentation rapide
Notre exécutable génère le fichier trajectoires.json, dans lesquels ils stocke les points des trajectoires orbitales de Mercure, Venus, Terre et Mars. Le programme imprime dans la sortie standard la période de révolution en jours de chaque planète. Nous avons utilisé la méthode d'Euler et la méthode d'Euler asymétrique. 
## Installer depuis le code source
Veillez à bien suivre les indications en étant entré dans le répertoire projetCIR1_groupe8

**Logiciels nécessaires :**
cmake >= *3.18*
testé avec GNU make *4.3*
testé avec cc *10.2.1*

**Testé sur Linux 64 bits :**
>$ cmake CMakeLists.txt
>$ make

## Exécuter

> $ ./projetCIR1_groupe8

**Bien vérifier que le fichier a les droits en écriture :**
> $ ls -l ./projetCIR1_groupe8
> \# chmod +x ./projetCIR1_groupe8


## Faire sans CMake

> $ cd source_code
> gcc *.c -lm -o projetCIR1_groupe8

Pour l'exécution se référer au chapitre **Exécuter** mais en faisant bien attention d'être **dans le répertoire source_code**.

## Dépendances

 - stdio.h  
- stdlib.h  
- time.h  
- math.h
- string.h
## Site Web
Pour utiliser notre site, ouvrez index.html dans un navigateur moderne.
Nous avons testé et débogué le code javascript sur Firefox *101.0.1 (64 bits)*.
Nous avons animé les trajectoires avec [p5js](https://p5js.org/).

**Quelques indications :**
Pour utiliser le site il faut cliquer sur le bouton `Parcourir` et rentrer un fichier de trajectoires, de préférence un généré par notre programme.
Ensuite vous pouvez cliquer sur les boutons correspondants aux différentes planètes et leurs méthodes de calcul de trajectoire pour afficher leurs trajectoires complètes.
Chaque nouvelle trajectoire affichée accélèrera le tracé des autres.
Re-cliquer sur un bouton de planète cache sa trajectoire.
Le bouton `reset` fait repartir les tracés au début. 
## Utiliser votre propre .JSON
**Quelques conventions sont à respecter si vous voulez que vos trajectoires puissent-être affichées :**

 1. Formater vos trajectoires en format JSON
 2. Nommer vos trajectoires pour qu'elles correspondent aux entrées codées en dur dans notre code javascript. ( liste exhaustive des noms disponibles : earth-euler, earth-asym, merc-euler, merc-asym, mars-euler, mars-asym, venus-euler, venus-asym)

## Nous contacter

Remplissez un bug report ou envoyez un mail : rupioe@protonmail.com.
