#include <iostream>
#include <iomanip>
using namespace std;

// funcao que calcula o imc
double calcularIMC(double massa, double altura)
{
    return massa / (altura * altura);
}

int main() {
    double altura, massa;

    cout << "Digite a altura (m): " << endl;
    cin >> altura;
    cout << "Digite a massa (kg): " << endl;
    cin >> massa;

    // chama a funcao
    double imc = calcularIMC(massa, altura);


    cout << "------------------------" << endl;
    cout << "Indice de Massa Corporal (IMC)" << endl;
    cout << "------------------------" << endl;
    cout << "Altura: " << altura << endl;
    cout << "Massa: " << massa << endl;
    cout << "IMC: " << fixed << setprecision(4) << imc << endl;
    return 0;
}
