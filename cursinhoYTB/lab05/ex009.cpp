#include <iostream>
#include <iomanip>
using namespace std;

double quadrado(double x)
{
    return x * x;
}

double cubo(double x)
{
    return x * x * x;
}

int main() {
    double valor;

    cout << "Digite um valor: ";
    if (!(cin >> valor)) {
        cerr << "Entrada invalida\n";
        return 1;
    }

    double q = quadrado(valor);
    double c = cubo(valor);
    double cuboDoQuadrado = cubo(quadrado(valor));

    cout << fixed;
    cout << "Quadrado = "
         << setprecision(2)
         << q << endl;
    cout << "Cubo - "
         << setprecision(3)
         << c << endl;
    cout << "Cubo do quadrado = "
         << setprecision(4)
         << cuboDoQuadrado << endl;
         return 0;


}