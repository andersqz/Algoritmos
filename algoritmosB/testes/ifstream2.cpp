#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string conteudo;
    string nomeCarro = "SAVEIRO";
    ifstream fin;
    ofstream fout;

    fout.open("carros.txt");
    if (!fout.is_open()) {
        cout << "Arquivo não existe" << endl;
        return 1;
    } else {
        fout << "NIVUS 2020" << endl;
        fout << "GOLF GTI" << endl;
        fout << nomeCarro << endl;
        fout.close();
    }
    fin.open("carros.txt");
    if (!fin.is_open()) {
        cout << "Erro ao abrir para leitura" << endl;
        return 1;
    } else {
        cout << "Arquivo aberto corretamente!" << endl;
        while (getline(fin, conteudo)) {
            cout << conteudo << endl;
        }   cout << "Arquivo aberto corretamente" << endl;
    }
    fin.close();
    return 0;
}