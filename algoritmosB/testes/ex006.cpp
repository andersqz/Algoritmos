#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int cont = 0;
    ifstream fin;
    string linha;

    fin.open("nomes.txt");
    if(!fin.is_open()) {
        cout << "ARQ N ABERTO" << endl;
        return 1;
    } else {
        while (getline(fin, linha)) {
            cont++;
        } cout << cont << endl;
    }
    fin.close();
    return 0;
}