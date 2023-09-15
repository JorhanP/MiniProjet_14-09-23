#include "Conducteur.h"

using namespace std;

Conducteur::Conducteur() {

	this->nomConducteur = "jean";
	this->nomConducteur = "pierr";
	this->anneNaissance = 14;
}

Conducteur::~Conducteur() {

	cout << "Destructeur" << endl;

}

Conducteur::Conducteur(std::string nom, std::string prenom, int annee) {

	this->nomConducteur = nom;
	this->prenomConducteur = prenom;
	this->anneNaissance = annee;
}

std::string Conducteur::getNom() {
	return this->nomConducteur;
}

std::string Conducteur::getPrenom() {
	return this->prenomConducteur;
}

int Conducteur::getAnneNaissance() {
	return this->anneNaissance;
}

void Conducteur::afficheMotos() {

}

void Conducteur::addMoto(Moto* newMoto) {

}

void Conducteur::rmMoto(Moto* rmMoto) {

}
