#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main(){
    int esecuzione = 0;
    int numero_massimo_persone = 0;
    cout << "Questo programma controlla se sei magiorenne!" << endl;
    cout << "Inserisci il numero massimo di persone da controllare: ";
    cin >> numero_massimo_persone;
    for(int contatore = 0; contatore < numero_massimo_persone; contatore++){
        int eta = 0;
        string nome = "";
        string cognome = "";
        string continuo_esecuzione = "";
        cout << "inserisci i dati anagrafici della persona" << endl;
        cout << "Nome: ";
        cin >> nome;
        cout << "Cognome: ";
        cin >> cognome;
        cout << "Eta': ";
        cin >> eta;
        if(eta >= 18){
            cout << "Puoi entrare, sei maggiorenne." << endl;
        }
        else if(eta < 17){
            cout << "Non puoi entrare, sei un minore." << endl;
        }
        else{
            cout << "Errore!";
        }
    }
    cout << "Arrivederci!" << endl;
}
