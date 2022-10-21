/*********************************************

	  Codice scritto da Antonio Carbone
			  3°Fi - 2022-2023
		 Secondo compito d'informatica

	Descrizione del progetto:
		dati tre numeri il programma
		determina in autonomia il numero
		maggiore e minore tra gli inseriti

*********************************************/


#include <iostream>

using namespace std;

int main() {
	//Inizializazioni delle variabili
	int numero_1, numero_2, numero_3;
	int numero_maggiore, numero_minore;

	//Inserimento dei dati
	cout << "Inserisci tre numeri:" << endl;
	cout << "Valore del primo numero: ";
	cin >> numero_1;
	cout << "Valore del secondo numero: ";
	cin >> numero_2;
	cout << "Valore del terzo numero: ";
	cin >> numero_3;

	//Elaborazione dei dati
	if (numero_1 > numero_2 && numero_1 > numero_3) {
		numero_maggiore = numero_1;
	}
	if (numero_2 > numero_1 && numero_2 > numero_3) {
		numero_maggiore = numero_2;
	}
	if (numero_3 > numero_1 && numero_3 > numero_2) {
		numero_maggiore = numero_3;
	}
	
	if (numero_1 < numero_2 && numero_1 < numero_3) {
		numero_minore = numero_1;
	}
	if (numero_2 < numero_1 && numero_2 < numero_3) {
		numero_minore = numero_2;
	}
	if (numero_3 < numero_1 && numero_3 < numero_2) {
		numero_minore = numero_3;
	}

	//Restituzione del riordinamento
	cout << "Il numero maggiore tra gli inseriti e': " << numero_maggiore << " e il numero minore e':  " << numero_minore << endl;


	system("PAUSE");
	return 0;
}