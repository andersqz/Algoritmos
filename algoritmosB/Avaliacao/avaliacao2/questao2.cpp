#include <iostream>
#include <ctime>
#define TAM 10

using namespace std;

void popularVetor(int vetor[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }
}

void exibirVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << "\t";
    }
    cout << endl;
}

int descobrePares(int veotr[], int n, int vetorResultado[]) {
    int qtdPares = 0;
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 ==0) {
            vetorResultado[qtdPares] = vetor[i];
            qtdPares++;
        }
    }
    return qtdPares;
}

int main() {
    int vetor[TAM];
    int vetorResultado[TAM];

    popularVetor(vetor, TAM);
    exibirVetor(vetor, TAM);
    //vetor = [1,2,3,4,5]

    int qtdPares = 0;
    descobrePares(vetor, TAM, vetorResultado, &qtdPares);
    //vetorResultado = [2,4]

    exibirVetor(vetorResultado, qtdPares);
    return 1;
}