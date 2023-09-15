#include "Moteur.h"

using namespace std;

Moteur::Moteur() {
	this->puissance = 14;
}


Moteur::~Moteur() {
	cout << "Destructeur Moteur" << endl;
}

Moteur::Moteur(int puissance) {
	this->puissance = puissance;
}

int Moteur::getPuissance() {
	return this->puissance;
}


void Moteur::setPuissance(int newpuissance) {
	this->puissance = newpuissance;
}