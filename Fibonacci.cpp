#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    long int a, b, c, n;

    cout << "Primo numero -> ";
    cin >> a;
    cout << "Secondo numero-> ";
    cin >> b;
    cout << "Inserisci range -> ";
    cin >> n;

    cout << a << endl;
    cout << b << endl;
    for (int i = 0; i < n; i++){
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}
