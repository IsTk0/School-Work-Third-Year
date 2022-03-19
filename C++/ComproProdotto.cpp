#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	//sezione inizializazioni variabili
	double denaro_a_disposizione, prezzo_prodotto, differenza_denaro;
	double denaro_restante;
	
	//sezione con interazioni con l'utente
	cout << "Inserisci soldi a disposizione:" << endl;
	cin >> denaro_a_disposizione;
	cout << "inserisci prezzo:" << endl;
	cin >> prezzo_prodotto;
	
	//sezione condizionale
	if (denaro_a_disposizione >= prezzo_prodotto){
		cout << "Ti puoi permettere il prodotto scelto!" << endl;
		denaro_restante = denaro_a_disposizione - prezzo_prodotto;
		cout << "Ti restano: " << denaro_restante  << endl;
		cout << "Arrivederci e grazie" << endl;
	}
	else {
		cout << "Mi spiace informarti che non disponi dei soldi necessari" << endl;
		denaro_restante = prezzo_prodotto - denaro_a_disposizione;
		cout << "Ti servono: " << denaro_restante << endl;
		cout << "Ti aspettiamo la prossima volta!" << endl;
	}
	system("PAUSE");
}
