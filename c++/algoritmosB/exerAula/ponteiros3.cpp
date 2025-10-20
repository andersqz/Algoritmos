#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 5
using namespace std;


void popular(int *v, int n)
{
    srand(time(NULL));
    for (int i =0; i < n; i++) {
        v[i] = rand() % 20; // % 20 limita de 0 a 19
    }
}

void exibe(int *v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}

void paresImpares(int *v, int n, int *pares, int *impares) {
    *pares = 0;
    *impares = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            *pares = *pares + 1;
        } else {
            *impares = *impares + 1;
        }
    }
}

int main() {
    int vetor[TAM];
    popular(vetor, TAM);
    exibe(vetor, TAM);

    int qtdPares;
    int qtdImpares;
    paresImpares(vetor, TAM, &qtdPares, &qtdImpares);
    cout << "Total de pares: "<< qtdPares < endl;
    cout << "Total de impares: " << qtdImpares << endl;
    return 0;
}