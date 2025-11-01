#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string conteudo;
    ifstream fin;

    fin.open("nomes.txt");
    if (!fin.is_open()) {
        cout << "Arquivo não existe!";
        exit(EXIT_FAILURE);
    } else {
        getline(fin, conteudo);
        cout << conteudo << endl; 
        cout << "Arquivo aberto corretamente!";
    }
    fin.close();
    return 0;

}