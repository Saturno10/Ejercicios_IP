#include <iostream>
#include <string>
using namespace std;

int main() {
    int juegos_1,juegos_2,puntos_1,puntos_2 = 0;
    string secuencia;
    cout << "Introduce la ristra de caracteres formada por 1s y 2s: ";
    cin >> secuencia;
    for (int i = 0; i < secuencia.length(); ++i) {
        if (secuencia[i] == 1){
            puntos_1 += 15;
            cout << "Puntaje: " << puntos_1 << " - " << puntos_2 << endl;
        } else if (secuencia[i] == 2){
            puntos_2 += 15;
            cout << "Puntaje: " << puntos_1 << " - " << puntos_2 << endl;
        }
        if (puntos_1 == 60) {
            puntos_1 = 0;
            puntos_2 = 0;
            juegos_1++;
            cout << "Juego ganado por jugador 1" << endl ;
        }else if (puntos_2 == 60){
            puntos_1 = 0;
            puntos_2 = 0;
            juegos_2++;
            cout << "Juego ganado por jugador 2" << endl;
        }
        if (juegos_1 == 6){
            cout << "Gana el jugador 1" << endl;
            break;
        }else if (juegos_2 == 6){
            cout << "Gana el jugadr 2" << endl;
            break;
        }
    }


    return 0;
}
