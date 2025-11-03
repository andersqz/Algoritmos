#include <iostream>
#include <fstream>
#include <string>
#define TAM 4
using namespace std;

void exibirNomesReplicados(string vetor[], int n) {
    bool jaExibido[TAM] = {false};

    cout << "\nNomes replicados encontrados:\n";
    bool temDuplicado = false;

    for (int i = 0; i < n; i++) {
        if (jaExibido[i]) continue;

        int contador = 1;
        for (int j = i + 1; j < n; j++) {
            if (vetor[i] == vetor[j]) {
                contador++;
                jaExibido[j] = true;
            }
        }

        if (contador > 1) {
            cout << "- " << vetor[i] << " (aparece " << contador << " vezes)" << endl;
            temDuplicado = true;
        }
    }

    if (!temDuplicado) {
        cout << "Nenhum nome duplicado encontrado." << endl;
    }
}

int main() {
    string nomes[TAM];
    ofstream fout;
    string linha;
    ifstream fin;
    int cont = 0;

    // Grava os nomes em arquivo
    fout.open("nomes.txt");
    for (int i = 0; i < TAM; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
        fout << nomes[i] << endl;
    }
    fout.close();

    // Lê de volta do arquivo (só para simular a leitura)
    fin.open("nomes.txt");
    if (!fin.is_open()) {
        cout << "Erro ao abrir o arquivo\n";
        exit(EXIT_FAILURE);
    } else {
        while (getline(fin, linha)) {
            cont++;
            cout << linha << endl;
        }
        cout << "\nQuantidade de nomes no arquivo: " << cont << endl;
        cout << "Arquivo aberto corretamente\n";
    }
    fin.close();

    // Agora localiza e exibe nomes duplicados
    exibirNomesReplicados(nomes, TAM);

    return 0;
}
