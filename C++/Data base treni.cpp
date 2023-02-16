#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int matrix[5][5];

//conversione minuti in oire
//matrice in stringhe

int riempimento_matrice(){

	
	for (int i = 0; i < 5; i++)
		for(int j = 0; j < i; j++){
			
			int minutaggio_generato = rand()%200+100;
			
			if(i == j)
				matrix[i][j] = 0;
			else
				matrix[i][j] = minutaggio_generato;
			
		}
	
	for (int i = 0; i < 5; i++)
		for(int j = 0; j < i; j++)
			matrix[j][i] = matrix[i][j];
	
}

void mostra_matrice(){
	
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++)
				cout << matrix[i][j] << "\t";
		cout << endl;
	}

}

int mostra_minutaggio(int citta_partenza, int citta_arrivo){
	int  ore_percorrenza = matrix[citta_partenza][citta_arrivo] / 60;
	
	cout << "Il tempo di percorrenza in MINUTI tra le due citta da te selezionate è pari a: " << matrix[citta_partenza][citta_arrivo] << " minuti" << endl;
	cout << "Il tempo di percorrenza tra le due citta in ORE è pari a: " << ore_percorrenza << " ore e in:  " << endl;	
}

int main(){
	srand(time(NULL));	
	
	riempimento_matrice();
	mostra_matrice();
	
	int citta_di_partenza = 0, citta_di_arrivo = 0;
	
	cout << "\nLISTA CITTA:\n" << endl;
	cout << "1 : Messina" << endl;
	cout << "2 : Catania" << endl;
	cout << "3 : Palermo"<< endl;
	cout << "4 : Trapani" << endl;
	cout << "5 : Caltanisetta" << endl;
	
	cout << "\nInserisci la citta da dove vuoi partire -> ";
	cin >> citta_di_partenza;
	cout << "\nInserisci la citta dove vuoi arrivare -> ";
	cin >> citta_di_arrivo;
	
	citta_di_partenza--;
	citta_di_arrivo--;
	
	mostra_minutaggio(citta_di_partenza,citta_di_arrivo);
	
	
}
