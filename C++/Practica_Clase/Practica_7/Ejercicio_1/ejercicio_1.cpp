
#include <iostream>
#include <list>
#include <fstream>


using namespace std;
const char MARCA_FIN_LINEA = '\n';

void guardarFichero (list<int> S, string nombre) {
    ofstream f;
    list<int>::iterator EA;

    f.open (nombre);
    if (!f) {
        cout << "Error abriendo el fichero resultado" << endl;
    }
    else
    {
        EA = S.begin();
        while (EA != S.end()) {
            f << *EA << " ";
            EA++;
        }//end-while
        f.close();
    }
};

void cargarFichero (list<int> &S, string nombre) {
    ifstream f;
    int dato;

    f.open (nombre);
    if (!f) {
        cout << "Error abriendo el fichero de datos" << endl;
    }
    else {
        S.clear(); // Borra el contenido previo de la lista
        while (f >> dato) {
            S.push_back (dato);
        }
        f.close();
    }//end-if
};

int main() {
    list<float> S;
    list<float>::iterator EA;

    cargarFichero(S, "entrada7.1.txt");
    EA = S.begin();

    if (EA ==S.end()){
        cout <<"Secuencia vacía";
    }
    else {
        float media = 0.0;
        float suma =0.0;
        int numeroAlumnos = 0;
        int menor40 = 0;
        int entre40_50 = 0;
        int mayor_50 = 0;
        bool estultimo = false;
        do {

            if (EA =! S.end()){
                if(*EA <40){
                    menor40++;
                }else if (*EA <= 50){
                    entre40_50 ++;
                }else{
                    mayor_50 ++;
                }
                numeroAlumnos ++;
                suma += *EA;
            }else{
                estultimo = true;
            }
            EA++;

        } while (!estultimo);
        cout << "Hay " <<menor40 << "alumnos de meno de 40kg" << "\n";
        cout << "Hay " << entre40_50 << "alumnos entre 40 y 50kg" << "\n";
        cout << "hay " << mayor_50 << "alumnos de mas de 50 kg" << "\n";
        media = suma/numeroAlumnos;
        cout << "El peso medio es de " << media << "kg" << "\n" ;
    }
}
