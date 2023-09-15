#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include <string>
class Moteur;

class Moto
{
private:
	int poids;
	Moteur* moteur;
protected:


public:
	Moto();
	~Moto();
	int getPoids();
	void setPoids(int poids);
	Moteur* getMoteur(); 
	void setMoteur(Moteur* moteur);


};
#endif
