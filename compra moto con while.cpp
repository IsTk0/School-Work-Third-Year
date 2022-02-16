#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	float costoMoto, soldiRisparmiati, importo, soldiRestanti;
	
	cout << "Inserisci il prezzo della moto Euro: " ;
	cin >> costoMoto;
	cout << "Inserisci la quantita di soldi risparmiati Euro: ";
	cin >> soldiRisparmiati;
	
	while(soldiRisparmiati < costoMoto){
		cout << "Purtroppo non puoi ancora permetterti la moto aggiungi altri risparmi Euro: ";
		cin >> importo;
		soldiRisparmiati = soldiRisparmiati + importo;
		soldiRestanti = costoMoto - soldiRisparmiati;
		if (soldiRisparmiati < costoMoto){
			cout << "Ti servono ancora Euro: " << soldiRestanti <<endl;
		}
	}
	soldiRestanti = soldiRisparmiati - costoMoto;
	cout << "Puoi finalmente permetterti la moto" << endl;
	cout << "Ti rimangono Euro: " << soldiRestanti;
}
