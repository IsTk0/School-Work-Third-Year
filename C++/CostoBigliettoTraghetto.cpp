#include <iostream>

using namespace std;

int main() {
	int tipologia_vettura, numero_cilindrata, costo_biglietto;

	cout << "Il costo del biglietto viene basato sulla tipologia di veicolo" << endl;
	cout << "Inserisci 1 se il tuo veicolo e' un autovettura" << endl;
	cout << "Inserisci 2 se il tup veicolo e' un mezzo pesante" << endl;
	cout << "Tipologia vettura -> ";
	cin >> tipologia_vettura;

	switch (tipologia_vettura) {
		case 1:
			cout << "Inserisci 1 se la tua cilindrata e' tra 1 e 1000cc" << endl;
			cout << "Inserisci 2 se la tua cilindrata e' tra 1001 e 2000cc" << endl;
			cin >> numero_cilindrata;
			switch (numero_cilindrata) {
				case 1:
					costo_biglietto = 20;
					cout << "Il prezzo per il tuo biglietto e' pari a: " << costo_biglietto << "$" << endl;
					break;
				case 2:
					costo_biglietto = 30;
					cout << "Il prezzo per il tuo biglietto e' pari a: " << costo_biglietto << "$" << endl;
					break;
				default:
					cout << "Il numero della cilindrata non e' stato riconosciuto dal sistema, riprova" << endl;
					break;
			}
		break;

		case 2:
			cout << "Inserisci 1 se la tua cilindrata e' tra 1000 e 2000cc" << endl;
			cout << "Inserisci 2 se la tua cilindrata e' tra 2001 e 3000cc" << endl;
			cin >> numero_cilindrata;
			switch (numero_cilindrata) {
				case 1:
					costo_biglietto = 40;
					cout << "Il prezzo per il tuo biglietto e' pari a: " << costo_biglietto << "$" << endl;
					break;
				case 2:
					costo_biglietto = 50;
					cout << "Il prezzo per il tuo biglietto e' pari a: " << costo_biglietto << "$" << endl;
					break;
				default:
					cout << "Il numero della cilindrata non e' stato riconosciuto dal sistema, riprova" << endl;
					break;
			
			}
		break;

		default:
			cout << "Il veicolo da te inserito non è stato riconosciuto dal sistema, riprova" << endl;
			break;
	}
}
