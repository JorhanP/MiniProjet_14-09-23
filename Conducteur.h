#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H
#include <iostream>
#include <string>
class Moto;

class Conducteur
{

private:

    std::string nomConducteur;

    std::string prenomConducteur;

    int anneNaissance;


    Moto* mesMotos[10];

protected:


public:

    Conducteur();
    ~Conducteur();
    Conducteur(std::string nom, std::string prenom, int annee);
    std::string getNom();
    std::string getPrenom();
    int getAnneNaissance();

    void afficheMotos();
    void addMoto(Moto* newMoto);
    void rmMoto(Moto* rmMoto);

};

#endif