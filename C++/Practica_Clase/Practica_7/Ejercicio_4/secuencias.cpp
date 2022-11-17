#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;
const char MARCA_FIN_LINEA = '\n';

void guardarFichero (list<char> S, string nombre) {
    ofstream f;
    list<char>::iterator EA;

    f.open (nombre);
    if (!f) {
        cout << "Error abriendo el fichero resultado" << endl;
    }
    else
    {
        EA = S.begin();
        while (EA != S.end()) {
            if (*EA == MARCA_FIN_LINEA) {
                f << endl;
            } else {
                f << *EA;
            }
            EA++;
        }//end-while
        f.close();
    }
};

void cargarFichero (list<char> &S, string nombre) {
    ifstream f;
    string cadena;
    unsigned int i;

    f.open (nombre);
    if (!f) {
        cout << "Error abriendo el fichero de datos" << endl;
    }
    else {
        S.clear(); // Borra el contenido previo de la lista
        while (getline(f, cadena)) {
            for (i=0; i<cadena.length(); i++) {
                S.push_back (cadena[i]);
            }
            S.push_back (MARCA_FIN_LINEA);
        }//end-while
        f.close();
    }//end-if
};
