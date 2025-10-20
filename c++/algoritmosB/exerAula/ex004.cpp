#include <iostream>
#include <cstdlib> //pra rand() e srand()
#include <ctime> //pra time()
using namespace std;

//essa funcao preenche o vetor com numeros aleatorios
void popularVetor(int *vet, int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++) {
        *(vet + 1) = rand() % 100; // rand gera um numero aleatorio e % 10 limia de 0 a 99
    }
}

void localizarParImpar(int *vet, int n, int *qtdPar, int *qtdImpar)
{
    *qtdPar = o
}


