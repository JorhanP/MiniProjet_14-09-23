/*****************************************************************//**
 * \file   Moteur.cpp
 * \brief  Definition de la classe Moteur
 *
 * \author Jad
 * \version 0.1
 * \date   september 2023
 *
 * Programme Cpp permettant de creer des objet 'Moteur' en composition avec la class Moto
 *********************************************************************/

#include "Moteur.h"

using namespace std;
/**
 * \brief Constructeur par default
 * \li Puissance = 14
 *
 */
Moteur::Moteur() {
	this->puissance = 14;
}

/**
 * \brief Destructeur
 *
 */
Moteur::~Moteur() {
	cout << "Destructeur Moteur" << endl;
}
/**
 * \brief Constructeur avec parametres rentres en argument
 * \param puissance : puissance du moteur 
 */
Moteur::Moteur(int puissance) {
	this->puissance = puissance;
}
/**
 * \brief Accesseur de l'attribut puissance
 *
 * \return puissance
 */
int Moteur::getPuissance() {
	return this->puissance;
}

/**
 * \brief Mutateur de l'attribut Puissance
 *
 * \param puissance ; puissance du moteur 
 */
void Moteur::setPuissance(int newpuissance) {
	this->puissance = newpuissance;
}