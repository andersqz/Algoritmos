#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
    string conteudo;

    fin.open("usuarios.txt");
    if (!fin.is_open()) {
        cout << "arquivo nao foi aberto" << endl;
        exit(EXIT_FAILURE);
    } else {
        while(getline(fin, conteudo)) {
            cout << conteudo << endl;
        }   cout << "Arq aberto corretamente\n";
    }
    fin.close();
    return 0;
}