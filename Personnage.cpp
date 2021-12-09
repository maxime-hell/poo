#include "Personnage.h"
#include <string>
using namespace std;
/*
    Le fichier source . cpp utilise les header de son meme nom et peut prendre std;


    On initialise les constructeur ici et on les impl�mentes avec ses attributs
    On initialise toutes les m�thodes et leurs corp
    en se servant de la classe en entete suvie de deux double point
    Ici on a initialiser un personnage, quand une creera une istance perssonage
    il aura de base les valeurs qu'on lui a attribu�es.
*/
Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Epee rouillee";
    m_degatsArme = 10;
}
/*
    Ici le constructeur prend en parametre une arme, ce qui ser lors de l'initialisation
    de lui donner une arme choisi par le programmeur.
    nomArme et degatsArme sont des parametre envoy� par le constructeur,
    m_ permet donc de comprendre qu'elles sont memebre de la classe et de ne pas les m�langer
*/
Personnage::Personnage(string nomArme, int degatsArme)
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = nomArme;
    m_degatsArme = degatsArme;
}

Personnage::Personnage(int vie, int mana)
{
    m_vie = vie;
    m_mana = mana;
    m_nomArme = "Epee rouillee";
    m_degatsArme = 10;
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;  //Retire � m_vie le montant de degats mis en parametre

    if(m_vie < 0)       //Evite d'avoir un vie n�gative, on la fixe � 0
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)    //Personnage &cible
{
    cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirPotion(int quantitePotion)
{
    m_vie += quantitePotion;    //Ajoute � m_vie la quantie de vie relative a quantitepotion

    if (m_vie > 100)            //Evite d'avoir une vie superieur � la vie max du personnage
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;    //On se contente de stocker dans les anciennes variables le nouveau nom
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant()  //On pourrais  metre const car elle ne modifie pas l'objet
{
    return m_vie > 0;   //Si m_vie est superiteur � 0 renvoie true, sinon renvoie false
}
