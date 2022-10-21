/*********************************************

	  Codice scritto da Antonio Carbone
			  3°Fi - 2022-2023
		   compito d'informatica

	Descrizione del progetto:
		 inserita la data nel formato gg/mm/aaaa
		 per poi riordinarla nel formto seguente:
		 Luogo, gg giorno del mese di xxxxxxxx, aaaa.

*********************************************/

#include <iostream>

using namespace std;

int main() {
	int giorno, mese, anno;
	string luogo = "";

	cout << "Inserisci la data odierna nel formato gg/mm/aaaa : " << endl;
	cout << "Giorno: ";
	cin >> giorno;
	cout << "Mese: ";
	cin >> mese;
	cout << "Anno: ";
	cin >> anno;
	cout << "Inserisci il luogo: ";
	cin >> luogo;

	switch (mese) {
		case 1:
			cout << luogo << " , " << giorno << " giorno del mese di Gennaio, " << anno;
			break;
		case 2:
			cout << luogo << " , " << giorno << " giorno del mese di Febraio, " << anno;
			break;
		case 3:
			cout << luogo << " , " << giorno << " giorno del mese di Marzo, " << anno;
			break;
		case 4:
			cout << luogo << " , " << giorno << " giorno del mese di Aprile, " << anno;
			break;
		case 5:
			cout << luogo << " , " << giorno << " giorno del mese di Maggio, " << anno;
			break;
		case 6:
			cout << luogo << " , " << giorno << " giorno del mese di Giugno, " << anno;
			break;
		case 7:
			cout << luogo << " , " << giorno << " giorno del mese di Luglio, " << anno;
			break;
		case 8:
			cout << luogo << " , " << giorno << " giorno del mese di Agosto, " << anno;
			break;
		case 9:
			cout << luogo << " , " << giorno << " giorno del mese di Settembre, " << anno;
			break;
		case 10:
			cout << luogo << " , " << giorno << " giorno del mese di Ottobre, " << anno;
			break;
		case 11:
			cout << luogo << " , " << giorno << " giorno del mese di Novembre, " << anno;
			break;
		case 12:
			cout << luogo << " , " << giorno << " giorno del mese di dicembre, " << anno;
			break;
		default:
			cout << "errore";
	}

}