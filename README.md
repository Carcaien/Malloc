# Malloc
Qu'est ce que c'est ?
---------------------

Ce répertoire contient une implémentation des fonctions malloc et free ainsi
qu'un main de test.
Ces implémentations de fonctions on été écrit en C.

Comment compiler et tester cette librairie ?
--------------------------------------------

1. Taper dans une invite de commande à la racine du répertoire la
commande suivante :

    $> make
    $> export LD_PRELOAD=`pwd`/libmy_malloc.so

2. Puis lorsque vous avez finis votre série de test :

    $> unset LD_PRELOAD

Explication et justification des choix d'implémentations
--------------------------------------------------------
