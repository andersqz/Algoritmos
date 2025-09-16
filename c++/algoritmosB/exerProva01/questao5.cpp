#include <iostream>
#define TAM 10
using namespace std;

void lerVetor(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Digite um numero inteiro: ";
        cin >> vetor[i];
    }
}

int somaVetor(int vetor[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += vetor[i];
    } 
    return 0;
}

int main () {
    int vetor[TAM];

    lerVetor(vetor, TAM);
    int soma = somaVetor(vetor, TAM);

    cout << "A soma de todos os elementos eh: " << soma << endl;
    return 1;

}