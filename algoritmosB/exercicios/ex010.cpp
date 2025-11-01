#include <iostream>
#include <string>
#include <fstream>
#include "meus-includes\MeusIncludes.cpp" // (depois podemos trocar por um .h)

using namespace std;

int main() {
    string nomeArquivo;
    char letra;
    string conteudo, linha;

    cout << "Digite o caminho do arquivo: ";
    cin >> nomeArquivo;

    cout << "Digite a letra a ser substituida: ";
    cin >> letra;

    // Lê o conteúdo do arquivo inteiro
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    while (getline(arquivo, linha)) {
        conteudo += linha + "\n"; // mantém as quebras de linha
    }
    arquivo.close();

    // Chama a função para trocar os caracteres
    string resultado = trocaCaracter(conteudo, letra);

    cout << "\nTexto modificado:\n" << resultado << endl;

    return 0;
}
