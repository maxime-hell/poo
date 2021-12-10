#include "Arme.h"

using namespace std;

Arme::Arme();
{
    m_nom = "Epee rouille";
    m_degats = 10;
}

Arme::Arme(string nom, int degats);
{
    m_nom = nom;
    m_degats = degats;
}

void Arme::changer(string nomArme, int degatsArme);
{
    m_nom = nomArme;
    m_degats = degatsArme;
}

void Arme::afficher();
{
    cout << "Arme : " << m_nom << " Degats : " << m_degats << endl;
}
