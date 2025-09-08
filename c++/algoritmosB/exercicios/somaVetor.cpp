#include <iostream>
using namespace std;

int somaVetor(int vetor[], int tamanho);

int main () {
    int n;

    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;

    int vetor[n];

    cout << "Digite " << n << " numeros inteiros: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int resultado = somaVetor(vetor, n);

    cout << "A soma dos elementos do vetor eh: " << resultado << endl;

    return 0;
}

int somaVetor(int vetor[], int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}