#include <iostream>
#include <cmath>
using namespace std;

double moduloVetor(double x, double y);

int main() {
    double x, y;

    cout << "Digite as coordenadas do vetor: " << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    double resultado = moduloVetor(x, y);

    cout << "O tamanho do vetor eh " << resultado << endl;

    return 0;
}

double moduloVetor(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}