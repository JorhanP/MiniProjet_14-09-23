// StageDescription.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Conducteur.h"
#include"Moteur.h"
using namespace std;


int annee;
string nom, prenom;


int main() {

	cout << "Annee" << endl;
	cin >> annee;
	cout << "Nom" << endl;
	cin >> nom;
	cout << "Prenom" << endl;
	cin >> prenom;

	Conducteur nouveauConducteur(nom,prenom,annee);

	cout << "Le nom du conducteur est " << nouveauConducteur.getNom() << "\n";
	cout << "Le prenom du conducteur est " << nouveauConducteur.getPrenom() << "\n";
	cout << "L'age du conducteur est " << nouveauConducteur.getAnneNaissance() << "\n";

}

