#include <iostream>
#include <list>
#include <string>
using namespace std;

list<int> hacer_meseta(){
    /*Obtener la meseta*/
    string entrada;
    string temp_text;
    int number_to_add;
    list<int> numeros;
    cout << "Introduce una ristra de numeros separadas solo por espacios:";
    cin >> entrada;
/*Una vez que se tiene la ristra de numeros, se va recorriendo caracter a caracter*/
    for (int i = 0; i <= entrada.length(); ++i) {
        /*Si el caracter no es un espacio, el caracter se añade a una string de paso*/
        if ((entrada[i] =! " ")){

            temp_text += entrada[i];
            /*Si es un espacio, esa string de paso se pasa a un numero entero y se añade posteriormente a la lista*/
        } else{
            number_to_add = atoi(temp_text.c_str());
            numeros.assign(1 ,number_to_add);
            temp_text = "";
        }
    }
    return numeros;

}

int main() {
/*Declarar variables*/
    list<int> numeros = {15, 15, 15, 56, 56, 1, 3, 2, 2};
    if (numeros.size() != 0){
        hacer_meseta();
    }else{
        for (int i = 0; i < numeros.size(); ++i) {
            int temp;
            if (i == 0){
                temp = numeros;
            }


        }

    }


    return 0;
}
