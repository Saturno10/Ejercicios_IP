#include <iostream>

#include <list>


using namespace std;

#include "Secuencias.cpp"

int main() {
    list<int> S;
    list<int>::iterator EA;
    list<int> R;
    int anterior;

    cargarFichero(S, "entrada7.2.txt");
    EA = S.begin();
    if(EA == S.end()){
        cout << "Fichero sin datos" <<endl;

    }else{
        anterior = *EA;
        do {
            EA ++;
            if (EA == S.end()){
                break;
            }
            R.push_back(anterior+*EA);
            anterior = *EA;
            cout << *EA << endl;
        } while (true);
        guardarFichero(R, "salida7.2.txt");
    }
}
