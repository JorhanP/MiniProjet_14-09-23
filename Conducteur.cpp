/*****************************************************************//**
 * \file   Conducteur.cpp
 * \brief  Definition de la classe Conducteur
 *
 * \author Jad
 * \version 0.1
 * \date   september 2023
 *
 * Programme Cpp permettant de creer des objet Conducteur
 *********************************************************************/

#include "Conducteur.h"

using namespace std;
/**
 * \brief prenomConducteur = jean
 * \li nomConducteur = pierr
 * \li anneNaissance = 14
 *
 */
Conducteur::Conducteur() {

	this->prenomConducteur = "jean";
	this->nomConducteur = "pierr";
	this->anneNaissance = 14;
}
/**
 * \brief Destructeur
 *
 */
Conducteur::~Conducteur() {

	cout << "Destructeur" << endl;

}
/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nomConducteur
 * \param prenomConducteur
 * \param anneNaissance
 */
Conducteur::Conducteur(std::string nom, std::string prenom, int annee) {

	this->nomConducteur = nom;
	this->prenomConducteur = prenom;
	this->anneNaissance = annee;
}
/**
 * \brief Accesseur de l'attribut Nom
 *
 * \return Nom 
 */
std::string Conducteur::getNom() {
	return this->nomConducteur;
}
/**
 * \brief Accesseur de l'attribut Prenom
 *
 * \return Prenom
 */
std::string Conducteur::getPrenom() {
	return this->prenomConducteur;
}
/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */
int Conducteur::getAnneNaissance() {
	return this->anneNaissance;
}

void Conducteur::afficheMotos() {

}

void Conducteur::addMoto(Moto* newMoto) {

}
/**
 * \brief Destructeur
 *
 */
void Conducteur::rmMoto(Moto* rmMoto) {

}
