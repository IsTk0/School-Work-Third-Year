#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void inserimento_dati(float tempo_noleggio[7], float costo_noleggio[7], int giornata, float minuti, float costo_orario){
    tempo_noleggio[giornata] = minuti;
    costo_noleggio[giornata] = costo_orario;
}

void mostra_informazioni(float tempo_noleggio[7], float costo_noleggio[7]){
    float costo_totale = 0;
    cout << endl;
    for (int giornata = 0; giornata < 7; giornata++){
        if (tempo_noleggio[giornata] < 60){
            cout << "Giornata " << giornata+1 << ": " << tempo_noleggio[giornata] << " minuti di noleggio, prezzo giornaliero: " << costo_noleggio[giornata] << " euro" << endl;
            costo_totale += costo_noleggio[giornata];
        }
        if (tempo_noleggio[giornata] >= 60){
            int ore = tempo_noleggio[giornata] / 60;
            int minuti = tempo_noleggio[giornata] - (ore * 60);
            cout << "Giornata " << giornata+1 << ": " << ore << " ore e " << minuti << " minuti di noleggio, prezzo giornaliero: " << costo_noleggio[giornata] << " euro" << endl;
            costo_totale += costo_noleggio[giornata];
        }
    }
    cout << "Entrate totali: " << costo_totale << " euro" << endl;
}

int main(){
    srand(time(NULL));
    float tempo_noleggio[7], costo_noleggio[7];
    float minuti, costo_orario;

    for (int giornata = 0; giornata < 7; giornata++){
        cout << "Inserisci il numero di minuti di noleggio del giorno " << giornata+1 << ": ";
        cin >> minuti;
        costo_orario = (minuti / 60) * 8;
        inserimento_dati(tempo_noleggio, costo_noleggio, giornata, minuti, costo_orario);
    }   

    mostra_informazioni(tempo_noleggio, costo_noleggio);
}