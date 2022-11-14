//Copia di un vettore in un altro

#include <iostream>

using namespace std;

int main(){
	
	int vet[5];
	int vet_c[5];
	
	for (int i = 0; i <= 4; i++){
		cout << "Inserisci il valore in posizione " << i << " del vettore: " ;
		cin >> vet[i];
		vet_c[i] = vet[i];
		
	}
	
	cout << "Dati inseriti nel primo vettore: " ;
	
	for (int i = 0; i <= 4; i++){
		cout << vet[i] << " ";
			
	}
	
	cout << "\nDati inseriti nel secondo vettore: " ;
	
	for (int i = 0; i <= 4; i++){
		cout << vet_c[i] << " ";
			
	}
	
	
}
