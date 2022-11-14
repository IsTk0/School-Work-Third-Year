//Visualizazione dati vettori pari o dispari

#include <iostream>

using namespace std;

int main(){
	
	int vet[5];
	int scelta = 0;
	
	for (int i = 0; i <= 4; i++){
		cout << "Inserisci il valore in posizione " << i << " del vettore: " ;
		cin >> vet[i];
	}
	
	cout << "\nVuoi visualizare solo i numeri dispari (scrivi 1) altrimenti 0 per la visualizazione dei numeri pari: ";
	cin >> scelta;
	
	if (scelta == 1){
		
		cout << "I numeri pari inseriti nel vettore sono: " << endl;
		
		for (int i = 0; i <= 4; i++){
			
			if(vet[i] % 2 == 0){
				cout << vet[i] << " ";
			}
			
		}
		
	}
	
	else{
		
		cout << "I numeri dispari inseriti nel vettore sono: " << endl;
		
		for (int i = 0; i <= 4; i++){
			
			if(vet[i] % 2 != 0){
				cout << vet[i] << " ";
			}
			
		}
		
	}
	
}
