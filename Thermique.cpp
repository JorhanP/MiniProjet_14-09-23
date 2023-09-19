/*****************************************************************//**
 * \file   Thermique.cpp
 * \brief  Definition de la classe Thermique
 *
 * \author Jad
 * \version 0.1
 * \date   september 2023
 *
 * Programme Cpp permettant de creer des objet 'Thermiques' heritant de la classe moteur 
 *********************************************************************/

#include "Thermique.h"

using namespace std;

/**
 * \brief Destructeur par default
 *
 */

thermique::~thermique() {
	cout << "Destructeur" << endl;
}
/**
 * \brief Accesseur de l'attribut Cylindree
 *
 * \return cylindree de l'objet
 */
float thermique::getCylindree() {
	return this->cylindree;
}
/**
 * \brief Mutateur de l'attribut cylindree
 *
 * \param newCylindree nouvelle cylindree du moteur
 */
void thermique::setCylindree(float newCylindree) {
	this->cylindree = newCylindree;
}