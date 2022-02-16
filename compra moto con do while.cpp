#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	float costoMoto, soldiRisparmiati, importo, soldiRestanti;
	
	cout << "Inserisci il prezzo della moto Euro: " ;
	cin >> costoMoto;
	
	do {
		cout << "Inserisci la quantita di denaro risparmiato Euro: ";
		cin >> importo;
		soldiRisparmiati = soldiRisparmiati + importo;
		soldiRestanti = costoMoto - soldiRisparmiati;
		if (soldiRisparmiati < costoMoto){
			cout << "Ti servono ancora Euro: " << soldiRestanti <<endl;
		}
	}
	while(soldiRisparmiati < costoMoto);
		
	soldiRestanti = soldiRisparmiati - costoMoto;
	cout << "Puoi finalmente permetterti la moto" << endl;
	cout << "Ti rimangono Euro: " << soldiRestanti;
}

