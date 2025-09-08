#include <iostream>
using namespace std;

double mediaHarmonica(double x, double y);

int main () {
    double n1, n2;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;

    cout << "Digite o segundo numero: " << endl;
    cin >> n2;

    double resultado = mediaHarmonica(n1, n2);
    cout << "Amedia harmonica dos numeros e " << resultado << endl;

    return 0;
}

double mediaHarmonica(double x, double y) 
{
    return (2.0 * x * y) / (x + y);
}