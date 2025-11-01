#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float custoFabrica;
    float imposto = 45;
    float distribuidor = 28;

    cout << "Qual o valor de fabrica do carro? " << endl;
    cin >> custoFabrica;

    float custoConsumidor = custoFabrica + (custoFabrica * imposto / 100) + (custoFabrica * distribuidor / 100);

    cout << "O custo do consumidor fica R$" << custoConsumidor << endl;
    return 0;



}