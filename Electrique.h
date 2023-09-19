#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H
#include <iostream>
#include <string>


class electrique
{
private:
	float tensionMax;

protected:


public:
	~electrique();
	float getTensionMax();
	void setTensionMax(float puissance);

};
#endif