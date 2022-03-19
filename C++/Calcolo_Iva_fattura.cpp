#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	const double iva = 22;
	double prezzo_prodotto_1, prezzo_prodotto_2, prezzo_prodotto_3, prezzo_iva, totale_fattura_NOIVA, totale_fattura_IVA;
	
	//sezione interazione con l'utente
	cout << "Questo programma calcola il prezzo di 3 prodotti con l'iva aggiunta" << endl;
	cout << "Inserisci il prezzo imponibile del primo prodotto-> Euro: ";
	cin >> prezzo_prodotto_1;
	cout << "Inserisci il prezzo imponibile del secondo prodotto-> Euro: ";
	cin >> prezzo_prodotto_2;
	cout << "Inserisci il prezzo imponibile del terzo prodotto-> Euro: ";
	cin >> prezzo_prodotto_3;
	
	//sezione calcoli matematici
	totale_fattura_NOIVA = prezzo_prodotto_1 + prezzo_prodotto_2 + prezzo_prodotto_3;
	prezzo_iva = totale_fattura_NOIVA * iva / 100;
	totale_fattura_IVA = prezzo_iva + totale_fattura_NOIVA;
	
	//sezione output risultati
	cout << "Il totale della fattura sprovvisto d'Iva e'-> Euro: " << totale_fattura_NOIVA << endl;
	cout << "Il totale della fattura con iva inclusa e' -> Euro: " << totale_fattura_IVA << endl;
	system("PAUSE");
}
