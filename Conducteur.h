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

    std::string getNom();
    std::string getPrenom();
    std::string getAnneNaissance();

    void afficheMotos();
    void addMoto(Moto* newMoto);
    void rmMoto(Moto* rmMoto);

};

#endif