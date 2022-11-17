#include <iostream>

using namespace  std;
bool esPrimo(int n){
    int i;
    bool primo;

    if (n == 1){
        primo = true;
    }else{
        i = 2;
        while((n %i) != 0){
            i++;
        }
        if (n == i){
            primo = true;
        }else{
            primo = false;
        }}
    return primo;
}
int main() {
int a0, an, m, meses;
a0 = 125;
cout << "Introduzca m: ";
cin >> m;
    do {
        meses = 0;
        if (m <= 125){
            meses = 0;
            break;
        }
        an = an +(0.04/12)*an + a0;
        meses++;


    }while (an < m);
    cout << "Necesitas " <<meses << " meses para ahorrar " << an << " euros";
}