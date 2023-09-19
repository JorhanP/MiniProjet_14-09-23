// StageDescription.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Conducteur.h"
#include"Moteur.h"
#include"Moto.h"
#include"Electrique.h"
#include"Thermique.h"
using namespace std;


int annee, poid, newpuissance;
string nom, prenom;


int main() {

	cout << "Annee" << endl;
	cin >> annee;
	cout << "Nom" << endl;
	cin >> nom;
	cout << "Prenom" << endl;
	cin >> prenom;

	Conducteur nouveauConducteur(nom, prenom, annee);

	cout << "Le nom du conducteur est " << nouveauConducteur.getNom() << "\n";
	cout << "Le prenom du conducteur est " << nouveauConducteur.getPrenom() << "\n";
	cout << "L'age du conducteur est " << nouveauConducteur.getAnneNaissance() << "\n";



	Moteur Moteur1;

	cout << "Puissance du moteur ?" << endl;
	cin >> newpuissance;

	Moteur1.setPuissance(newpuissance);
	cout << "Le puisssance du moto est " << Moteur1.getPuissance() << "\n";


	Moto Moto1;

	cout << "Poid de la moto ?" << endl;
	cin >> poid;

	Moto1.setPoids(poid);
	cout << "Le poid de la moto est " << Moto1.getPoids() << "\n";


}

