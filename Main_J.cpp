// StageDescription.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Conducteur.h"
#include"Moteur.h"
using namespace std;


int nom, prenom, annee;


int main() {

	Conducteur nouveauConducteur;

	cout << "Le nom du conducteur est " << nouveauConducteur.getNom() << "\n";
	cout << "Le prenom du conducteur est " << nouveauConducteur.getPrenom() << "\n";
	cout << "L'age du conducteur est " << nouveauConducteur.getAnneNaissance() << "\n";



}