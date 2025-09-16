#include <iostream>
using namespace std;

int main () {
    float altura;
    float largura;
    float comprimento;
    float multi;

    cout << "Procurando o volume do cubo ..." << endl;

    cout << "Qual a altura, largura e comprimento do cubo? " << endl;
    cin >> altura >> largura >> comprimento;

    multi = altura * largura * comprimento;

    cout << "O volumero do cubo eh de: " << multi << "cm cubicos" << endl;
    return 0;
}

