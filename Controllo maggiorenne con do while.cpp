#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main(){
    cout << "Questo programma controlla se sei magiorenne!" << endl;
    do{
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
        cout << "Vuoi continuare l'esecuzione del programma? [Y/n]" << endl;
        cin >> continuo_esecuzione;
        if(continuo_esecuzione == "N" or continuo_esecuzione == "n" or continuo_esecuzione == "no" or continuo_esecuzione == "No" or continuo_esecuzione == "NO"){
            break;
        }
    } while(true);
}
