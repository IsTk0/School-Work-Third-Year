#include <iostream> //Importazione delle Librerie
#include <cstdlib>
using namespace std;
int main() //Inizializzazione e dichiarazione delle variabili
{
    int base, altezza;
    int area, perimetro;

    cout << "Programma che calcola il perimetro e l'area di un rettangolo" << endl; //Output richiesta dati (cout)
    cout << "Inserire la base \t:";
    cin >> base; //Input Dati (cin)
    cout << "Inserire l'altezza \t:";
    cin >> altezza;
    perimetro = (base + altezza) * 2; //Fase calcoli
    area = (base * altezza) * 2;

    cout << "La misura del perimetro\t:" << perimetro << endl; //Output dei dati elaborati e finiti
    cout << "La misura del area \t:" << area << endl;

    system("PAUSE"); //Sys. Pause per non fare uscire automaticamente dalla finestra DOS a script finito
    return 0;        //Stop di altri output
}
