#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int numero_numeri_totali = 0, numero_inserito = 0, somma_numeri_inseriti = 0, continua = 0, calcolo_media = 0;
	
	cout << "Benvenuto in questo programma. Inserisci i numeri di cui devi calcolare la media." << endl;
	
	do{
		numero_numeri_totali++;
		cout << "Inserisci un numero-> ";
		cin >> numero_inserito;
		somma_numeri_inseriti = somma_numeri_inseriti + numero_inserito;
		cout << "Vuoi continuare ad inserire dei numeri? (0 no. 1 si): ";
		cin >> continua;
		calcolo_media = somma_numeri_inseriti / numero_numeri_totali;
		cout << "Attualmente la media e' pari a: " << calcolo_media << endl;
		cout << "----------------------------------------------------------------------" << endl;
	}
	while(continua == 1);
	cout << "Arrivederci :)";
}
