#include "Moteur.h"

using namespace std;

Moteur::Moteur() {

}


int Moteur::getPuissance() {
	return this->puissance;
}


void Moteur::setPuissance(int newpuissance) {
	this->puissance = newpuissance;
}