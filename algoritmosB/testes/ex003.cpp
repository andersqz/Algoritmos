#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string nomes[3];
    ofstream fout;

    fout.open("nomes.txt");
    for (int i = 0; i < 3; i++) {
        cout << "Digite o " << i+1 << " nome: " << endl;
        getline(cin, nomes[i]);
        fout << nomes[i] << endl;
    }

    fout.close();
    return 0;
}