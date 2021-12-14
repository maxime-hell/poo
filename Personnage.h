#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
//Permet de compiler les parties du code dans certains endroit du programme
#include "Arme.h"
//Permet d'utiliser des objet de type Arme
#include <iostream>
#include <string>
/*
    On ne met pas la dir�ctive using namespace std car il a des effet nefaste dans les headers
    Ce fichier headers .h contiendra la d�claration de la classe
    aves les attributs et les prototypes des m�thodes (m�thodes sans corp).


    Initialisation d'une classe personage,
    Par convention on commence le nom d'une par une majuscule pour les diff�rencier
    Creer des perssonage reviens a creer des instances de classe perssonage.

    Par convention initialise d'abbord les m�thodes et ensuite les attributs.

    Dans la classe nous allons initialiser les m�thodes propres � la classe.
    Les m�thodes peuvent etre de plusieurs types, generalement void.
    Dans la classe nous allons initialiser les attributs propres � la classe
    Par convention, les attributs des classes commencent par m_, pour indiquer qu'elles sont memebres
    et les diff�rencier des variable (qui ne sont pas des attributs).

    On donne des droits d'acces aux m�thodes et attributs, dans la majorit� des cas
    les m�thodes sont priv� ( ne peuvent pas etre modifi�es sauf par des m�thodes)
    et les attributs publiques (pour pouvoir s'en servir).

    Un constructeur permet de donner des parametres � une instance
    Il y a un contructeur de base qui consiste � donner le nom de la classe suivi d'un string pour lui donner le nom
    Il permet d'initialiser les attributs et de s'en servir
    Un constructeur n'a pas de valeur � l'initialisation (pas de int, void, char...).
    Par convention, on �crit le contructeur par d�faut au lieu de le laisser dans l'IDE

*/
class Personnage
{
    public :

    Personnage();   //Contructeur par defaut
    Personnage(std::string nom, std::string nomArme, int degatsArme);    //Contructeur
    Personnage(std::string nom, int vie, int mana);  //Constructeur
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirPotion(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat() const;
    void enVie() const;

    private :

    int m_vie;
    int m_mana;
    std::string m_nom;
    Arme m_arme;
/*
    La classe perssonage � donc un attribut m_arme de la classe Arme
    on l'a intialis� avec so constructeur par d�faut, ses parametres de bases sont donc
    m_nom = "Epee rouille"; m_degats = 10;
*/
};

#endif // DEF_PERSONNAGE
