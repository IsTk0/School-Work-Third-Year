#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(){
    string nome_utente;
    int numero_da_indovinare = 0, numero_inserito = 0, numero_tentativi = 0;
    
    cout << "Benvenuto in indovina il numero!" << endl;
    cout << "Inserisci il tuo nome: ";
    cin >> nome_utente;
    cout << nome_utente << " adesso tocca a te! Inserisci un numero da 0 a 100" << endl;
    
    srand(time(NULL));
    numero_da_indovinare = (rand() % 100) + 1;
    
    do {
        numero_tentativi = numero_tentativi + 1;
        cout << "Prova ad indovinare il numero: ";
        cin >> numero_inserito;
        if (numero_inserito < numero_da_indovinare){
            cout << "Mi dispiace hai sbagliato. Il numero da te inserito e' troppo piccolo" << endl;
        }
        else if (numero_inserito > numero_da_indovinare){
            cout << "Mi dispiace hai sbagliato. Il numero da te inserito e' troppo grande" << endl;
        }
    }
    while(numero_da_indovinare != numero_inserito);
    
    cout << "BRAVO " << nome_utente << " sei riuscito ad indovinare il numero con " << numero_tentativi << " tenativi" << endl;
    system("PAUSE");
}

