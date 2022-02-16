#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	float distanza_percorsa, consumo_al_chilometro, costo_al_litro; //variabili in
	float costo_giornaliero, costo_settimanale, costo_mensile, consumo_viaggio; //variabili out 
	
	//sezione interazione utente / input dati
	cout << "Questo programma calcola il costo gionaliero, settimanale e mensile di un viaggio." << endl;
	cout << "Inserisci la distanza (andata e ritorno) percorsa in Km --> Km ";
	cin >> distanza_percorsa;
	cout << "Inserisci i chilometri che percorri con un litro di benzina --> Km ";
	cin >> consumo_al_chilometro;
	cout << "Inserisci il costo di un litro di carburnte --> Euro ";
	cin >> costo_al_litro;
	
	//sezione calcolo matematici
	consumo_viaggio = distanza_percorsa / consumo_al_chilometro;
	costo_giornaliero = consumo_viaggio * costo_al_litro;
	costo_settimanale = costo_giornaliero * 5;
	costo_mensile = costo_settimanale * 4;
	
	//sezione output dati
	cout << "Il costo giornaliero del viaggio risulta esser pari a --> Euro " << costo_giornaliero << endl;
	cout << "Il costo settimanale (5 giorni) del viaggio risulta esser pari a --> Euro " << costo_settimanale<< endl;
	cout << "Il costo mensile (4 settimane da 5 giorni) del viaggio risulta esser pari a --> Euro " << costo_mensile << endl;
}
