#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "meus-includes\MeusIncludes.cpp"

using namespace std;

int main() {
    string arquivo;

    cout << "Digite o caminho do arquivo: " << endl;
    cin >> arquivo;

    int totalVogais = contarVogais2(arquivo);

    if (totalVogais >= 0) {
        cout << "o arquivo possui " << totalVogais << " vogais" << endl;
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    return 0;
}