#include "Arme.h"

using namespace std;

Arme::Arme()
{
    m_nom = "Epee rouille";
    m_degats = 10;
}

Arme::Arme(string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

void Arme::changer(string nomArme, int degatsArme)
{
    m_nom = nomArme;    //On se contente de stocker dans les anciennes variables le nouveau nom
    m_degats = degatsArme;
}

void Arme::afficher() const
{
    cout << "Arme : " << m_nom << " Degats : " << m_degats << endl;
}
/*
Ici on initialise un accesseur, qui permet de retourner la valeur d'un attribut privé
affin de l'uttiliser ou de l'afficher, sa valeur de retour sera la valeur de la méthode
et sera considéré comme constante, comme on ne modifier pas ma valeur qui est private
Par convention on commence l'asseseur par "get" (recuperer en anglais).
*/
int Arme::getDegats() const
{
    return m_degats;
}
