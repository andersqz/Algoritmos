
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

#include "meus-includes\MeusIncludes.cpp"

using namespace std;

int main() {
    //receber frase em um string e uma letra em char
    string frase;
    cout << "Digite uma frase: " << endl;
    getline(cin, frase);

    char letra;
    cout << "Digite a letra de pesquisa: " << endl;
    cin >> letra;

    //receber a frase com o caracter de pesquisa substituido pelo @
    string fraseResultado = trocaCaracter(frase, letra);

    //exibir a frase alterada
    cout << "Frase alterada: " << fraseResultado << endl;

    return 1;
}