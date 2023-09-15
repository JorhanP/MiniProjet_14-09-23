#include "Moto.h"

using namespace std;

Moto::Moto() {

	this->poids = 1520;

}

Moto::~Moto() {

	cout << "Destructeur" << endl;

}

int Moto::getPoids() {
	return this->poids;
}

void Moto::setPoids(int poid) {
	this->poids = poid ;
}

Moteur* Moto::getMoteur() {
	return this->moteur;
}

void Moto::setMoteur(Moteur* moteur_choisis) {
	this->moteur = moteur_choisis;

}

