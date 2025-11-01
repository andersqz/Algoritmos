#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    string nome;

    fout.open("usuarios.txt");
    cout << "Digite seu nome: " << endl;
    getline(cin, nome);

    fout << nome << endl;
    fout.close();
    return 0;
}