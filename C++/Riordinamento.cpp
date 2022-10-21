/*********************************************

	  Codice scritto da Antonio Carbone
			  3°Fi - 2022-2023
		 Primo compito d'informatica
	
	Descrizione del progetto:
		dati due numeri alla macchina l'utente 
		decide se riordinarli in modo 
		crescente o degrescente

*********************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
	//inizializazone delle variabili
	int numero_1, numero_2, memoria_variabile, scelta;
	int esegui = 1;

	cout << "Insersci due numeri" << endl;

	//inserimento numeri 
	cout << "Primo numero: ";
	cin >> numero_1;
	cout << "Secondo numero: ";
	cin >> numero_2;

	while (esegui == 1) {

		//scelta della tipologia di riordinamento
		cout << "Se vuoi riordinare i numeri in modo crescente digita 1" << endl;
		cout << "Se vuoi riordinare i numeri in modo decrescente digita 2" << endl;
		cin >> scelta;

		//riordia in modo crescente
		if (scelta == 1) {
			//esempio 5 > 2
			if (numero_1 > numero_2) {
				memoria_variabile = numero_1;
				numero_1 = numero_2;
				numero_2 = memoria_variabile;
				cout << "ecco i numeri riordinati: " << numero_1 << " - " << numero_2;
				esegui = 0;

			}
			else if (numero_1 < numero_2) {
				cout << "ecco i numeri riordinati: " << numero_1 << " - " << numero_2;
				esegui = 0;
			}
		}

		//riordina in modo decrescente
		if (scelta == 2) {
			//esempio 5 > 2
			if (numero_1 > numero_2) {
				cout << "ecco i numeri riordinati: " << numero_1 << " - " << numero_2;
				esegui = 0;
			}

			else if (numero_1 < numero_2) {
				memoria_variabile = numero_1;
				numero_1 = numero_2;
				numero_2 = memoria_variabile;
				cout << "ecco i numeri riordinati: " << numero_1 << " - " << numero_2;
				esegui = 0;
			}
		}

		if (scelta != 1 && scelta != 2) {
			cout << "Il valore da te inserito non è corretto, riprova" << endl;
		}
	}

	return 0;
}
