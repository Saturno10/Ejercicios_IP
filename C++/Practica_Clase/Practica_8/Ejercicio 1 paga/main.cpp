#include <iostream>
using namespace std;

int main() {
    enum Meses {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO,
        AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};
    enum Colores {ROJO, VERDE, AZUL};
    enum Figuras {RECTANGULO, CUADRADO, ELIPSE, CIRCULO};

    Meses mes;
    int paga;
    paga = 1200;
    mes = JULIO;

    if ((mes == JULIO ) || (mes == DICIEMBRE)){
        paga = paga*2;
    }

    return 0;
}
