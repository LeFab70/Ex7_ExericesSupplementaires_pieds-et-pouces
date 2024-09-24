/*
 Programmer: Fabrice
 Date:  20/09/2024
 Bit:   programme qui demande à l'utilisateur deux mesures entière (pieds et pouces) et ensuite fait les étapes suivantes:
	- affiche le nombre de pieds et pouces entré.
	- convertie le nombre de pieds en pouces pour afficher le total de pouces entré.
	- convertie le nombre de pouces total pour afficher le totale en centimètre.
		Défi :
		Ajouter une troisième mesure demandée à l’utilisateur (mètres ou millimètres)

*/

#include <iostream>

using namespace std;

//Liste des constantes
const int PIED_EN_POUCE = 12;
const double POUCE_EN_CM = 2.54;
const double MM_EN_POUCE = 0.0393701;

int main()
{
	//liste des inputs
	unsigned int nbrePieds = 0;
	double nbrePouces = 0.0;
	double nbreMm = 0.0;

	//Liste des variables intermedieres

	//Liste des output
	double nbreCm = 0.0;

	//Entrer des valeurs
	cout << "=========Programme de conversion PIEDS-POUCE-MM en CM=======" << endl << endl
		<< "Entrer les mesures entieres:" << endl
		<< "\tValeur en pieds: ";
	cin >> nbrePieds;
	cout << "\tValeurs en pouces: ";
	cin >> nbrePouces;
	cout << "\tValeurs en mm: ";
	cin >> nbreMm;

	cout << endl << "-------------------------------" << endl
		<< nbrePieds << " pieds "
		<< nbrePouces << " pouces "
		<< nbreMm << " mm correspondent a : " << endl;

	/*
	Traitements
	*/

	nbrePouces += nbrePieds * PIED_EN_POUCE;
	nbrePouces += nbreMm * MM_EN_POUCE;
	nbreCm = nbrePouces * POUCE_EN_CM;


	//Affichage
	cout << endl << nbrePouces << " pouces soit un total de "
		<< nbreCm << " cm" << endl;

	system("pause");
	return 0;

}


