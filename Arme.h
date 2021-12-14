#ifndef DEF_ARME
#define DEF_ARME
#include <iostream>
#include <string>

class Arme
{
    public:

    Arme(); //Constructeur par defaut
    Arme(std::string nom, int degats);
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
    void afficherSuite() const;

    private:

    std::string m_nom;
    int m_degats;
};

#endif // DEF_ARME
