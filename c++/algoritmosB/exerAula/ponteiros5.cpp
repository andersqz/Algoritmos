    //construa um metodo que preencha o vetor com nomes lidos do teclado

    //construa um metodo que exiba os nomes do vetor

    //construa um metodo que receba o vetor e um nome a ser buscado, 'retorne' a posicao
    //do nome no vetor. caso o nome nao exista, 'retorne' -1. Nao eh permitido usar return.
#include <iostream>
#include <ctime>
#include <string>
#define TAM 5
using namespace std;

void preencherVetor(string vet[], int tamanho)
{
    cout << "=== Preenchendo o vetor ===" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        getline(cin, vet[i]);
    }
}

void exibirVetor(string vet[], int tamanho) {
    cout << "\n=== Nomes armazenados ===" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << i << " → " << vet[i] << endl;
    }
}

void buscarNome(string vet[], int tamanho, string nome, int *posicao)
{
    *posicao = -1; 
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] == nome) {
            *posicao = i;
            break;
        }
    }
}

int main() {
    string vetor[TAM];

    preencherVetor(vetor, TAM);
    exibirVetor(vetor, TAM);

    string nomeBusca;
    cout << "\nDigite um nome para buscar:  ";
    getline(cin, nomeBusca);

    int posicaoEncontrada;

    buscarNome(vetor, TAM, nomeBusca, &posicaoEncontrada);

    if (posicaoEncontrada == -1) {
        cout << "\nNome nao encontrado no vetor" << endl;
    } else {
        cout << "\nNome encontrado na posicao: " << posicaoEncontrada << endl;
    }

    return 0;
}