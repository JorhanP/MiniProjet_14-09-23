/*****************************************************************//**
 * \file   Moto.cpp
 * \brief  Definition de la classe Moto
 *
 * \author Jad
 * \version 0.1
 * \date   september 2023
 *
 * Programme Cpp permettant de creer des objet Moto
 *********************************************************************/

#include "Moto.h"

using namespace std;
/**
 * \brief Constructeur par default
 * \li poids = 1520
 *
 */
Moto::Moto() {

	this->poids = 1520;

}
/**
 * \brief Destructeur
 *
 */
Moto::~Moto() {

	cout << "Destructeur" << endl;

}
/**
 * \brief Accesseur de l'attribut Poids
 *
 * \return poids: poids de la moto
 */
int Moto::getPoids() {
	return this->poids;
}
/**
 * \brief Mutateur de l'attribut Poids
 *
 * \param Poids: poids de la moto
 */
void Moto::setPoids(int poid) {
	this->poids = poid ;
}
/**
 * \brief Accesseur de l'attribut Moteur
 *
 * \param Moteur: moteur associé a la moto
 */
Moteur* Moto::getMoteur() {
	return this->moteur;
}
/**
 * \brief Mutateur de l'attribut Moteur
 *
 * \param Moteur: moteur associé a la moto
 */
void Moto::setMoteur(Moteur* moteur_choisis) {
	this->moteur = moteur_choisis;

}

