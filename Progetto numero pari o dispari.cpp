#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int numero_inserito = 0; //inizializare la variabile di tipo intero
	cout << "Questo programma capisce il numero da te inserito � pari o dispari. Prova tu a inserirne uno qui: ";
	cin >> numero_inserito; //inserire il numero da calcolare
    //il codice esegue il code inserito tra le paretesi solo se
    //il resto � pari a 0 altrimente esegue il codice del else
	if (numero_inserito%2 == 0) {
		cout << "Il numero da te inserito � pari";
	}
	else {
		cout << "Il numero da te inserito � dispari";
	}
}
