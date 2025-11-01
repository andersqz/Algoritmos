#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

int contarVogais(string nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) return 0;

    stringstream buffer;
    buffer << arquivo.rdbuf();
    string
}