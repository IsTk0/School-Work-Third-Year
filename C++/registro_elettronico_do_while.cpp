#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int esecuzione;
    float voto_1, voto_2, voto_3, voto_4, voto_5, somma_media, totale_media;

    cout << "Benvenuto nel registro elettronico" << endl;

    do{
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
        cout << "Vuoi continuare a calcolare la media di altri alunni? (0 no) (1 si): ";
        cin >> esecuzione;

    }
    while(esecuzione == 1);

    cout << "Arrivederci :)" << endl;
    system("PAUSE");
}