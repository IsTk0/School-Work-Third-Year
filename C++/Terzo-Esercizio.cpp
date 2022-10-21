/*********************************************

	  Codice scritto da Antonio Carbone
			  3°Fi - 2022-2023
		 Terzo compito d'informatica

	Descrizione del progetto:
		 Dati tre numeri l'utente decide se 
		 riordinarli in ordine crescente o decrescente

*********************************************/

#include <iostream>

using namespace std;

int main() {
	
	//inizializazione delle variabili
	int numero_1, numero_2, numero_3, scelta_riordinamento;

	//Interazione con l'utente
	cout << "Inserisci tre numeri: " << endl;
	cout << "Primo numero";
	cin >> numero_1;
	cout << "Secondo numero";
	cin >> numero_2;
	cout << "Terzo numero";
	cin >> numero_3;

	//Scelta tipologia riordinamento
	cout << "Digita 1 se vuoi riordinare i numeri in modo crescnte" << endl;
	cout << "Digita 2 se vuoi riordinare i numeri in modo decrescnte" << endl;
	cout << "Scelta -> ";
	cin >> scelta_riordinamento;

	//Elaborazione dati
	if (scelta_riordinamento == 1) {
	
	}

	else if (scelta_riordinamento == 2) {
	
	}

	else {
		//restituisci errore
	}

	
}