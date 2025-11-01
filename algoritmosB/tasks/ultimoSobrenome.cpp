#include <iostream>
#include <string>
using namespace std;

string ultimoSobrenome(string nomeCompleto);

int main () {
    string nome;

    cout << "Digite seu nome completo: " << endl;
    getline(cin, nome);

    string sobrenome = ultimoSobrenome(nome);

    cout << "Ultimo sobrenome: " << sobrenome << endl;

    return 0;
}


string ultimoSobrenome(string nomeCompleto)
{
    int pos = nomeCompleto.find_last_of(' '); // acha o ultimo espaço

    if (pos == string::npos) {
        return nomeCompleto;
    }

    return nomeCompleto.substr(pos + 1); //pega o ultimo espaço ate o fim
}