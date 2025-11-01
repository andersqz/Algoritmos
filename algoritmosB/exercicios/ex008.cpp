#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <sstream>
#include <fstream>

using namespace std;

#include "meus-includes\MeusIncludes.cpp"

int main() {
    //receber o nome do arquivo
    string nomeArquivo;
    cout << "Digite caminho e nome do arquivo: " << endl;
    cin >> nomeArquivo;

    //testar se o arquivo existe
    if (existeArquivo(nomeArquivo)) {
        cout << "Arquivo localizado com sucesso" << endl;
    } else {
        cout << "Arquivo nao localizado" << endl;
        exit(0);
    }

    //receber o conteudo do arquivo em uma string
    string resposta = copiarArquivoString(nomeArquivo);

    //exibir o conteudo da string
    cout << resposta;

    return 1;
}