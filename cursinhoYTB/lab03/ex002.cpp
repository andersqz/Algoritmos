#include <iostream>
using namespace std;

int main () {
    int segundos;
    int minutos;

    cout << "Digite uma quantidade de minutos: " << endl;
    cin >> minutos;

    segundos = minutos * 60;

    cout << "Existem " << segundos << " segundos em  " << minutos << " minutos."  << endl;

    return 0;
}