#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include "secuencias.cpp"

using namespace std;


int main() {
    list<char> S;
    list<char>::iterator EA;
    typedef map<char, int> TipoHistograma;
    TipoHistograma histo;
    float  nElementos, nPor = 0;

    for (char op = 'a'; op <= 'z' ; ++op) {
        histo[op] = 0;
    }
    cargarFichero(S,"entrada8.1txt");
    EA = S.begin();
    while (EA != S.end()){
        if (*EA != ' '){
            histo[*EA]++;
            nElementos++;
        }
        EA++;
    }
    for (char op = 'a'; op <= 'z' ; ++op) {
        nPor = histo[op]*100/nElementos;
        cout << op << " - " << histo[op] << " -" << nPor << endl;
    }
    return 0;
}
