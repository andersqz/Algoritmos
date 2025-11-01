#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int cont = 0;
    string linha;
    ifstream fin;

    fin.open("nomes.txt");
    if (!fin.is_open()) {
        cout << "Arquivo nao foi encontrado" << endl;
        return 1;
    } else {
        while (getline(fin, linha)) {
            cont++;
        } cout << "Nomes: " << cont << endl;
    }
    fin.close();
    return 0;
}