#include "Thermique.h"

using namespace std;

thermique::~thermique() {
	cout << "Destructeur" << endl;
}

float thermique::getCylindree() {
	return this->cylindree;
}

void thermique::setCylindree(float newCylindree) {
	this->cylindree = newCylindree;
}