#include "Electrique.h"

using namespace std;

electrique::~electrique() {
	cout << "destructeur" << endl; 
}

float electrique::getTensionMax() {
	return this->tensionMax;
}

void electrique::setTensionMax(float puissance) {
	this->tensionMax = puissance;
}
