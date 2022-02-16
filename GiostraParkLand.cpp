#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int numeroAdulti, limite_persone;
    float numeroBambini = 0, numero_totali_persone = 0, numeri_posti_disponibili;
    cout << "Inserisci il limite delle persone che possono salire: " ;
    cin >> limite_persone;
    do {
        cout << "Inserisci Il numero di adulti: ";
        cin >> numeroAdulti;
        if (numeroAdulti < limite_persone){
            cout << "Inserisci Il numero di bambini: ";
            cin >> numeroBambini;
        }
        numero_totali_persone = numero_totali_persone + (numeroBambini/2) + numeroAdulti;
        numeri_posti_disponibili = limite_persone - numero_totali_persone;
        cout << "In questo momento ci sono " << numero_totali_persone << " persone sulla giostra" << endl;
        if (numero_totali_persone <= limite_persone){
            cout << "Restano ancora " << numeri_posti_disponibili << " posti" <<endl;
        }
        else {
            cout << "Non ci sono più posti!" << endl;
        }
        cout << "---------------------------------------------------" << endl;
    }
    while(numero_totali_persone < limite_persone);
    
    if (numero_totali_persone == limite_persone){
        cout << "La giostra è partita!" << endl;
    }
    else if (numero_totali_persone > limite_persone){
        float numero_persone_scendono;
        numero_persone_scendono = numero_totali_persone - limite_persone;
        cout << "La giostra è partita ma senza " << numero_persone_scendono << " persone" << endl;
    }
    cout << "Fatto da Anto";
    
    return 0;
}
