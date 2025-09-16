#include <iostream>
#include <string>
using namespace std;

string primeiroNome(string nomeCompleto);

int main () {
    string nome;

    cout << "Digite seu nome completo: " << endl;
    getline(cin, nome); // le inclusive espaços

    cout << "Primeiro nome: " << primeiroNome(nome) << endl;

    return 0;
}

// função que recebe o nome completo e retorna o primeiro nome
string primeiroNome(string nomeCompleto) 
{
    int pos = nomeCompleto.find(" "); // procura o primeiro espaço
    if (pos != string::npos) { //se encontrou espaço
        return nomeCompleto.substr(0, pos); //pega do inicio ate o espaço
    } else {
        return nomeCompleto; // se nao tem espaço, retorna o nome todo
    }
}