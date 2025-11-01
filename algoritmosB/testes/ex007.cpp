#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int contarVogais(string nomeArquivo) {
    ifstream arquivo;
    char c;
    int cont = 0;

    arquivo.open(nomeArquivo);
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo\n";
        return 1;
    }

    while (arquivo.get(c)) { //.get le caractere por caractere
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cont++;
    }
    arquivo.close();
    return cont;
}

int main() {
    ofstream fout;
    ifstream fin;
    string frase;
    int cont = 0;

    fout.open("texto.txt");
    cout << "Digite uma frase conhecida: " << endl;
    getline(cin, frase);

    fout << frase << endl;
    fout.close();

    fin.open("texto.txt");
    string linha;
    getline(fin, linha);
    cout << "Frase do arquivo: " << linha << endl;

    if (!fin.is_open()) {
        cout << "Erro ao abrir o arquivo!\n";
        return 1;
    } else {
        while (fin >> frase) {
            cont++;
        }
        int totalVogais = contarVogais("texto.txt");
        cout << "Total de vogais: " << totalVogais << endl;
        cout << "Arquivo possui: " << cont << " palavras!" << endl;
        cout << "Arquivo aberto corretamente!" << endl;
    }
    fin.close();
    return 0;
}