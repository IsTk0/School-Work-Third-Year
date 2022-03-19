#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n, numero, somma=0;
  
    cout << "Inserisci la quantita dei numeri da sommare: ";
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        cout << "Inserisci il numero da sommare: ";
        cin >> numero;
        somma += numero;
    }

    cout << "La somma e': " << somma;
    return 0;
}
