#include <iostream>


using namespace std;

struct Carro {
    string nome;
    string cor;
    float preco;
} ;

int main () {
    Carro car1;
    
    car1.nome = "Nivus";
    car1.cor = "Preto";
    car1.preco = 130.000;

    cout << "Nome: " << car1.nome << endl;
    cout << "Cor: " << car1.cor << endl;
    cout << "Preço: " << car1.preco << endl;
    
    return 1;
}
