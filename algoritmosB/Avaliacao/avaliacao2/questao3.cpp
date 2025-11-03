/*Questão 3) Dado um arquivo texto chamado de nomes.txt, 
criar um programa que leia o arquivo e armazene esses nomes numa lista de nomes do tipo string. 
Ao final, exibir a lista populada com a quantidade de nomes lidos do arquivo. 
Exemplo de arquivo nomes.txt Anderson Dick Guilherme Londero João Messias 
Alexandre Zamberlan Anderson Dick Guilherme Londero*/

#include <iostream>
#include <fstream>
#include <string>
#define TAM 4
using namespace std;

int main() {
    string nomes[TAM];
    ofstream fout;
    string linha;
    ifstream fin;
    int cont = 0;

    fout.open("nomes.txt");
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome " << i + 1 << ": " << endl;
        getline(cin, nomes[i]);
        fout << nomes[i] << endl;
    }
    fout.close();

    fin.open("nomes.txt");
    if (!fin.is_open()) {
        cout << "Erro ao abrir o arquivo\n";
        return 1;
    } else {
        while(getline(fin, linha)) {
            cont++;
            cout << linha << endl;
        }
        cout << "Quantidade de nomes: " << cont << endl;
        cout << "Arquivo aberto corretamente";
    }
    fin.close();
    return 0;
}