#include <iostream>
#include <list>
#include "secuencias.cpp"

using namespace std;
int main() {
    char caracter_buscado;
    list<char> S;
    list<char>::iterator EA;
    int x;
    int repeticiones = 0;
    cout << "Selecciona el caracter que quiere que busquemos: ";
    cin >> caracter_buscado;
    cout << "Selecciona el numero de veces que se debe de repeir: ";
    cin >> x;
    cargarFichero(S, "entrada7.4.txt");
    EA = S.begin();
    if (EA == S.end()) {
        cout << "Fichero sin datos";
    } else {
        while (EA != S.end()) {
            if (*EA == caracter_buscado) {
                repeticiones++;
            }
            if (repeticiones == x) {
                cout << "Si";
                break;
            }
            EA++;
        }
        if (repeticiones < x) {
            cout << "No";
        }
    }

    return 0;


}
