#include <iostream>
using namespace std;
#include <map>

typedef map <char, int > TipoHistograma;

int main() {
    TipoHistograma h;
    char op;

    for (char c='a'; c<='z'; c++) {
        h[c] = 0;
    }
    h['m'] = 7;
    op = 'a';
    h[op] = 2;
    cout << "Frecuencia de A = " << h[op] <<endl;
    cout << "Frecuencia de H = " << h['m'];
    return 0;
}
