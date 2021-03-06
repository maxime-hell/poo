/*
    Le header .h contien les attributs et les prototypes de la classe
    Le fichier source .ccp continet les d?finition des m?thodes et leurs impl?mentation
    On ajoute les headers pour faire pont entre les .cpp et le main
    pour pouvoir utilise leurs m?thodes et attributs
*/
#include <iostream>
#include <string>
#include "Personnage.h" //? inclure pour lier personnage.h au main.cpp
using namespace std;
/*
    Dans le main, on utilise cree des objet de la classe(type) Personnage
    On fait interagire les objet avec les m?thodes en les s?parents d'un point.
*/
int main()
{
    Personnage david("David", 150, 150), goliath("Goliath", "Epee Aiguise", 20);
    /*
        Creation de 2 objet/instance type personnage, goliath est initialis? avec un constructeur
        surcharg?(avec des parametres), on lui donne donc les valeurs dites en supl?ment.
        Si on met en parametre du constructeur par defaut une istance d?ja initialis?,
        celle prendra les parametres de l'instance mis en parametre du constructeur
    */

    cout << endl; david.afficherEtat(); cout << endl;
    goliath.afficherEtat(); cout << endl;

    goliath.attaquer(david);
    david.boirPotion(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double Hache", 40);
    goliath.attaquer(david);

    cout << endl; david.afficherEtat(); cout << endl;
    goliath.afficherEtat(); cout << endl;

    david.boirPotion(20);
    david.changerArme("Sabre du destin", 35);
    david.attaquer(goliath);

    cout << endl; david.afficherEtat(); cout << endl;
    goliath.afficherEtat(); cout << endl;

    goliath.boirPotion(50);
    david.attaquer(goliath);
    goliath.attaquer(david);
    david.attaquer(goliath);

    cout << endl; david.afficherEtat(); cout << endl;
    goliath.afficherEtat(); cout << endl;

    goliath.attaquer(david);
    david.attaquer(goliath);

    cout << endl; david.afficherEtat(); cout << endl;
    goliath.afficherEtat(); cout << endl;

    return 0;
}
