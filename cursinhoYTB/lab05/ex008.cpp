#include <iostream>
#include <cmath>
using namespace std;

double anguloVetor(double x, double y) {
    double radiano = atan2(x, y);
    double graus = radiano * 180.00 / M_PI;
    return graus;
}

int main() {
    double x, y;

    cout << "Digite as coordenadas do vetor: " << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    double angulo = anguloVetor(x, y);

    cout << "\nO angulo do vetor eh " << angulo << " graus" << endl;
    return 0;
}