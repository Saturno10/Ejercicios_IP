#include <iostream>
#include <math.h>
using namespace std;

float calcular_factorial(int x){
    float facto = 1;
    if (x > 1){
        for (int i = 1; i <= x; ++i) {
            facto = facto * i;
        }
    }

    return facto;
}

float calcular_potencia(int x,int y){
    float res;
    res = x;

    switch (y) {
        case 0:
            res = 1;
        case 1:
            res = x;
        default:
            for (int i = 1; i < y; ++i) {
                res = res * x;
            }
    }
    return res;
}

float  expM(int x, int n){
    float res;
    res = 0;
    for (int i = 0; i < n; ++i) {
        res = res + calcular_potencia(x, i)/ calcular_factorial(i);
    }
}

int main() {
    int  x, n = 0;
    cout << "Dame un valor para calcular e^x: ";
    cin >> x;
    cout << "Dime el numero de aproximaciones: ";
    cin >> n;
    cout << "e^" << x << "= " << expM(x, n) << endl;
    cout << "e^" << x << "= " << exp(x) << endl;
}
