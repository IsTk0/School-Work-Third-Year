#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int numero_alunni;
    float voto_1, voto_2, voto_3, voto_4, voto_5, somma_media, totale_media;

    cout << "Benvenuto nel registro elettronico" << endl;
    cout << "Inserisci il numero di alunni in una classe: ";
    cin >> numero_alunni;

    for(int i; i < numero_alunni; i++){
        cout << "------------------------------------------------------" << endl;
        cout << "Inserisci i voti dell'alunno:" << endl;
        cout << "Inserisci il primo voto: ";
        cin >> voto_1;
        cout << "Inserisci il secondo voto: ";
        cin >> voto_2;
        cout << "Inserisci il terzo voto: ";
        cin >> voto_3;
        cout << "Inserisci il quarto voto: ";
        cin >> voto_4;
        cout << "Inserisci il quinto voto: ";
        cin >> voto_5;

        somma_media = voto_1 + voto_2 + voto_3 + voto_4 + voto_5;
        totale_media = somma_media / 5;
        cout << "La media di questo alunno e' pari a: " << totale_media << endl;
    }

    cout << "Arrivederci :)" << endl;
    system("PAUSE");
}