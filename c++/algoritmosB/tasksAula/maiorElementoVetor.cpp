#include <iostream>
using namespace std;

int maiorNumero(int vetor[], int tamanho);

int main () {
    int n;

    cout << "Digite o tamanho de um vetor: " << endl;
    cin >> n;

    int vetor[n];

    cout << "Digite " << n << " numeros inteiros: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int maior = maiorNumero(vetor, n);

    cout << "O maior numero do vetor eh: " << maior << endl;

    return 0;
}


int maiorNumero(int vetor[], int tamanho) {
    int maior = vetor[0]; //assume que o primeiro eh o maior inicialmente
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}