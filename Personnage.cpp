#include "Personnage.h"
using namespace std;
/*
    Le fichier source . cpp utilise les header de son meme nom et peut prendre std;
    De plus, #include "Personnage.h" permet de ne pas rajouter #include <iostream> et <string>
    cair ils sont deja compris dans Personnage.h

    On initialise les constructeur ici et on les implémentes avec ses attributs
    On initialise toutes les méthodes et leurs corp
    en se servant de la classe en entete suvie de deux double point
    Ici on a initialiser un personnage, quand une creera une istance perssonage
    il aura de base les valeurs qu'on lui a attribuées.
*/
Personnage::Personnage()    //Le constructeur par defaut de la classe arme est appelé
{
    m_vie = 100;
    m_mana = 100;
}
/*
    Ici le constructeur prend en parametre une arme, ce qui ser lors de l'initialisation
    de lui donner une arme choisi par le programmeur.
    nomArme et degatsArme sont des parametre envoyé par le constructeur,
    m_ permet donc de comprendre qu'elles sont memebre de la classe et de ne pas les mélanger
*/
Personnage::Personnage(string nomArme, int degatsArme) : m_arme(nomArme, degatsArme)
{
    /*
    Le constructeur arme qui est appelé est celui qui prend en parametre un string et un entier
    L'attribut m_arme prend les parametres nomArme et degatsArme qui sont en parametre du constructeur personage
    L'appel a une autre classe se met en haut du constructeur pour eviter les bugs, suvie de :.
    */
    m_vie = 100;
    m_mana = 100;

}

Personnage::Personnage(int vie, int mana)
{
    m_vie = vie;
    m_mana = mana;
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;  //Retire à m_vie le montant de degats mis en parametre

    if(m_vie < 0)       //Evite d'avoir un vie négative, on la fixe à 0
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)    //Personnage &cible
{
    cible.recevoirDegats(m_arme.getDegats());
}   //La valeur en parametre apelle la fonction getDegats de la classe arme, et cette valeur viens de l'arme de personnage

void Personnage::boirPotion(int quantitePotion)
{
    m_vie += quantitePotion;    //Ajoute à m_vie la quantie de vie relative a quantitepotion

    if (m_vie > 200)            //Evite d'avoir une vie superieur à la vie max du personnage
    {
        m_vie = 200;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}
/*
    changerArme prend 2 paramettres, changer arme utilise les valeurs de m_arme qui a elle meme les valeurs
    du constructeur par defaut de la classe arme, auxquelles on applique le changement de valeurs graçe
    à la méthode changer de la classe arme, qui prend en parametre les deux paramettres de changerAmre.
*/
bool Personnage::estVivant()  //On pourrais  metre const car elle ne modifie pas l'objet
{
    return m_vie > 0;   //Si m_vie est superiteur à 0 renvoie true, sinon renvoie false
}

void Personnage::afficherEtat() const
{
    cout << "Vie : " << m_vie << endl;
    cout << "Mana : " << m_mana << endl;
    m_arme.afficher();   //Appel de la fonction affiche de la classe arme et pour attribut m_arme du personnage
}
