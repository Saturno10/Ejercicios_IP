#include <iostream>
using namespace std;

int main(){
    const int N = 10;
    typedef int Vector [N];
    int i;

    Vector t = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    int aux;
    aux = t[N-1];
    for (i = N; i > 0; --i) {
        t[i] = t[i-1];
    }
    t[0] = aux;

    for (int i = 0; i < N; ++i) {
        cout << t[i] << ", ";
    }
    return 0;
    }