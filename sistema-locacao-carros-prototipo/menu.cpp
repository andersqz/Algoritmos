#include <iostream>
#include <string>
using namespace std;

int menu() {
    int opcao;

    cout << "M E N U" << endl;
    cout << "01 - Cadastrar carro" << endl;
    cout << "02 - Alugar carro" << endl;
    cout << "03 - Listar carros" << endl;
    cout << "04 - Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcao;
    return opcao;

}