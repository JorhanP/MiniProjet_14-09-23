/*****************************************************************//**
 * \file   Electrique.cpp
 * \brief  Definition de la classe Electrique
 *
 * \author Jad
 * \version 0.1
 * \date   september 2023
 *
 * Programme Cpp permettant de creer des objet 'Electrique' heritant de la classe moteur
 *********************************************************************/

#include "Electrique.h"

using namespace std;
/**
 * \brief Destructeur
 *
 */
electrique::~electrique() {
	cout << "destructeur" << endl; 
}
/**
 * \brief Accesseur de l'attribut TensionMax
 *
 * \return tension max de l'objet electrique
 */
float electrique::getTensionMax() {
	return this->tensionMax;
}
/**
 * \brief Mutateur de l'attribut TensionMax
 *
 * \param tensionMax : tension max de l'objet electrique
 */
void electrique::setTensionMax(float puissance) {
	this->tensionMax = puissance;
}
