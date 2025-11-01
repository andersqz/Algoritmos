#include <iostream>
#include <cctype>
#include <fstream>
#include <sstream>
#include "meus-includes\MeusIncludes.cpp"

using namespace std;

int main() {
    string nomeArquivo;

    cout << "Digite o nome do arquivo: ";
    cin >> nomeArquivo;

    // Função 1: retorna o conteúdo em maiúsculo
    string textoMaiusculo = lerArquivoMaiusculo(nomeArquivo);
    cout << "\nTexto em MAIÚSCULO:\n" << textoMaiusculo << endl;

    // Função 2: retorna a quantidade de palavras
    int qtd = contarPalavras2(nomeArquivo);
    cout << "\nO arquivo possui " << qtd << " palavras." << endl;

    return 0;
}
