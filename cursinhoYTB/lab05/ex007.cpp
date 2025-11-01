#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

double moduloVetor(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    int x, y;

    cout << "Digite as coordenadas do vetor: " << endl;
    cout << "x: " << endl;
    cin >> x;
    cout << "y: " << endl;
    cin >> y;

    double resultado = moduloVetor(x, y);

    cout << "\nO tamanho do vetor eh: " << resultado << endl;
    return 0;^:
}