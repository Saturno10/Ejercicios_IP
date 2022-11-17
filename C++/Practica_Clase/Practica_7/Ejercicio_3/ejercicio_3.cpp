#include <iostream>
#include <list>
#include "secuencias.cpp"

using namespace std;
bool esPar(int dato){
    return((dato% 2) == 0);
}

int main() {
    list<int>::iterator EA;
    list<int> R;
    list<int> S;

    cargarFichero(S, "entrada7.3.txt");
    EA = S.begin();
    if (EA == S.end()){
        cout << "Fichero sin datos";

    }else{
        while ((EA != S.end()) && (!esPar(*EA))){
            EA ++;
        }
        if (EA == S.end()){
            cout << "No se ha encontrado ningún elemento par" << endl;

        }else{
            cout << "Encontrado par " << *EA << endl;
        }
    }
    return 0;
}
