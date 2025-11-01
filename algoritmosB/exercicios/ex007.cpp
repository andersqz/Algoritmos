#include <iostream>
#include <cctype>
#include <cstdlib>
#include <sstream>
#include "meus-includes\meusIncludes.cpp"
using namespace std;

int main() {
    string frase;

    cout << "Digite uma frase: " << endl;
    getline(cin, frase);

    string fraseMaiuscula = paraMaiuscula(frase);
    cout << "em maiusculo: " << fraseMaiuscula << endl;
    
    int totalPalavras = contarPalavras(frase);
    cout << "Numero de palavras: " << totalPalavras << endl;

    return 1;
}