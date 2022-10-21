#include <iostream>

using namespace std;

int main() {
	int numero_lati;

	while (0 == 0) {
		cout << "Inserisci i lati del poligono: ";
		cin >> numero_lati;

		switch (numero_lati) {
		case 3:
			cout << "La figura e' un triangolo" << endl;
			break;
		case 4:
			cout << "La figura e' un quadrilatero" << endl;
			break;
		case 5:
			cout << "La figura e' un pentagono" << endl;
			break;
		default:
			cout << "Il valore da te inserito e' errato" << endl;
		}
	}
}
