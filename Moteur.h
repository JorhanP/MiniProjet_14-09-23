#ifndef MOTEUR_H
#define MOTEUR_H
#include <iostream>
#include <string>


class Moteur
{

private:

	int puissance;

protected:


public:

	Moteur();
	~Moteur();
	Moteur(int puissance);
	int getPuissance();
	void setPuissance(int puissance);

};

#endif