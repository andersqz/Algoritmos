#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//função para ler nomes de um arquivo
int lerNomes(string nomes[], int maxNomes, const string& arquivoOrigem) {
    ifstream arquivo(arquivoOrigem); // abre o arquivo p leitura
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo: " << arquivoOrigem << endl;
        return 0;
     }

     int count = 0;
     while (getline(arquivo, nomes[count]) && count < maxNomes) {
        count++;
     }

     arquivo.close();
     return count; // retorna quantos nomes foram lidos
    }

//funcao para exibir 
void exibirNomes(string nomes[], int n) {
    cout << "\n--- Lista de nomes ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << nomes[i] << endl;
     }
}

int main () {
    const int MAX = 100; // limite de nomes
    string nomes[MAX];

    string nomeArquivo;
    cout << "Digite o nome do arquivo de origem (ex: nomes.txt): ";
    cin >> nomeArquivo;

    int qtd = lerNomes(nomes, MAX, nomeArquivo);
    if (qtd > 0) {
        exibirNomes(nomes, qtd);
    } else {
        cout << "Nenhum nome foi lido." << endl;
    }

    return 0;
}