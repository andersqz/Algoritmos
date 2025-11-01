#include <iostream>
using namespace std;

float aumentoSalario(float salario);

int main () {
    float salarioAtual, novoSalario;

    cout << "Digite o salario atual do funcionario: R$ " << endl;
    cin >> salarioAtual;

    novoSalario = aumentoSalario(salarioAtual);

    cout << "O novo salario com um aumento de 15% eh: R$ " << novoSalario << endl;

    return 0;
}

float aumentoSalario(float salario) {
   return salario * 1.15;
}


