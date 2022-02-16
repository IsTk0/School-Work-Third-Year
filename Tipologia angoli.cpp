#include <iostream>

using namespace std;

int main(){
    // crazione fariabili
    float angolo;
    // interfaccia umano pc
    cout << "Inserisci l'ampiezza di un angolo in gradi, è il programma ti dirà la tipologia del angolo" << endl;
    cout << "Inserisci l'angolo: °";
    cin >> angolo;
    // sezione/elaborazione condizionale
    if (angolo == 90){
        cout << "L'angolo è retto";
    }
    else if (angolo == 180){
        cout << "L'angolo è piatto";
    }
    else if(angolo == 360){
        cout << "L'angolo è giro";
    }
    else if (angolo > 90){
        cout << "L'angolo è ottuso";
    }
    else if (angolo < 90){
        cout << "L'angolo è acuto";
        }
    else {
        cout << "L'angolo inserito non è un angolo";
    }
}
