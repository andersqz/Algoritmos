#include <iostream>
using namespace std;

struct Pessoa {
    string nome;  //em C++ podemos usar string (nao so char[])
    int idade;
    float altura;

};

int main () {
    Pessoa p1;

    cout << "Digite o nome: ";
    cin >> p1.nome; //em C++ cin le string direto (sem precisar de scanf e char[])
    cout << "Digite a idade: ";
}