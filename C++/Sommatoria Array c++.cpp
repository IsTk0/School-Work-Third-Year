//Sommatoria valori vettori

#include <iostream>

using namespace std;

int main(){
	
	int vet[5];
	int somma_tot = 0;
	
	for (int i = 0; i <= 4; i++){
		cout << "Inserisci il valore in posizione " << i << " del vettore: " ;
		cin >> vet[i];
		somma_tot += vet[i];
	}
	
	cout << "La somma dei valori inseriti da te nel vettore e' pari a: " << somma_tot << endl;
}
