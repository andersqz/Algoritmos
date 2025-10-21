/*
   faça um método que receba o vetor, 
   substitua todos os numeros pares por zero e retorne a 
   quantidade de números que foram substituidos. Contudo, não é permitido 
   usar return
   */
#include <iostream>
#include <ctime>
#define TAM 5
using namespace std;

void popula(int *v, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 20;
    }
}

void exibe(int *v, int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}

void substituiPares(int *v, int n, int *qtdTrocas)
{
    *qtdTrocas = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            v[i] = 0;
            (*qtdTrocas)++;
        }
    }
}
int main() {
   int vetor[TAM];
   popula(vetor, TAM);
   
   cout << "Vetor Original: ";
   exibe(vetor, TAM);

   int substituidos;
   substituiPares(vetor, TAM, &substituidos);

   cout << "\nVetor apos substituir pares por zero: ";
   exibe(vetor, TAM);

   cout << "\nQtd de numeros substiuidos: " << substituidos << endl;
   return 0;


}