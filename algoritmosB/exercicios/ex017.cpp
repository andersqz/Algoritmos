#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

bool arquivoExiste(string nomeArquivo)
{
    ifstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        arquivo.close();
        return true;
    } else {
        return false;
    }
}

string lerArquivo(string nomeArquivo)
{
    ifstream arquivo(nomeArquivo);
    stringstream buffer;
    if (arquivo.is_open()) {
        buffer << arquivo.rdbuf();
        arquivo.close();
        return buffer.str();
    }
    return "";
}

int main() {
    string arquivo;

    cout << "Digite o nome do arquivo: " << endl;
    cin >> arquivo;

    if (arquivoExiste(arquivo)) {
        cout << "O arquivo existe!" << endl;
    } else {
        cout << "Arquivo nao existe." << endl;
    }

    string conteudo = lerArquivo(arquivo);
    cout << conteudo << endl;

    return 0;
}