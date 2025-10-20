#include <iostream>  // biblioteca padrão para entrada e saída (cout, cin)
#include <cstdlib>   // biblioteca que contém as funções rand() e srand()
#include <ctime>     // biblioteca para usar time(), que dá o horário atual do sistema

using namespace std;

/* =====================================================================
   FUNÇÃO: popularVetor
   - Objetivo: preencher um vetor com números inteiros aleatórios.
   - Parâmetros:
       int *vet  → ponteiro para o vetor (endereço de memória do primeiro elemento)
       int n     → quantidade de elementos do vetor
   ===================================================================== */
void popularVetor(int *vet, int n) {
    // srand() inicializa o gerador de números aleatórios com uma "semente"
    // Se não colocarmos isso, rand() sempre geraria a mesma sequência de números
    // A função time(0) retorna o tempo atual em segundos, garantindo variedade
    srand(time(0));

    // Percorre o vetor de 0 até n-1
    for (int i = 0; i < n; i++) {
        // *(vet + i) é o mesmo que vet[i]
        // Aqui usamos a notação de ponteiro explicitamente
        *(vet + i) = rand() % 100; // rand() gera um número aleatório, % 100 limita entre 0 e 99
    }
}

/* =====================================================================
   FUNÇÃO: localizarParesImpares
   - Objetivo: contar quantos números pares e ímpares existem no vetor.
   - Parâmetros:
       int *vet        → ponteiro para o vetor (primeiro elemento)
       int n           → quantidade de elementos do vetor
       int *qtdPares   → ponteiro para variável que armazenará a quantidade de pares
       int *qtdImpares → ponteiro para variável que armazenará a quantidade de ímpares
   ===================================================================== */
void localizarParesImpares(int *vet, int n, int *qtdPares, int *qtdImpares) {
    // O operador * acessa o valor contido no endereço de memória apontado
    // Aqui zeramos os contadores que estão fora da função
    *qtdPares = 0;
    *qtdImpares = 0;

    // Percorre o vetor
    for (int i = 0; i < n; i++) {
        // *(vet + i) acessa o valor da posição i do vetor
        if (*(vet + i) % 2 == 0)
            (*qtdPares)++;   // incrementa o valor apontado por qtdPares
        else
            (*qtdImpares)++; // incrementa o valor apontado por qtdImpares
    }
}

/* =====================================================================
   FUNÇÃO PRINCIPAL
   ===================================================================== */
int main() {
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    // ---------------------------------------------------------------
    // Alocação dinâmica de memória
    // ---------------------------------------------------------------
    // Aqui usamos 'new' para criar um vetor dinamicamente.
    // O nome 'vetor' é um ponteiro que aponta para o primeiro elemento do bloco de memória criado.
    int *vetor = new int[n];

    // ---------------------------------------------------------------
    // Preenche o vetor com números aleatórios
    // ---------------------------------------------------------------
    popularVetor(vetor, n);

    // ---------------------------------------------------------------
    // Mostra os números sorteados
    // ---------------------------------------------------------------
    cout << "\nVetor sorteado: ";
    for (int i = 0; i < n; i++) {
        // Acessando os valores usando notação de ponteiro
        cout << *(vetor + i) << " ";
    }

    // ---------------------------------------------------------------
    // Declara variáveis para armazenar os resultados
    // ---------------------------------------------------------------
    int pares, impares;

    // ---------------------------------------------------------------
    // Passando o ENDEREÇO das variáveis para a função
    // ---------------------------------------------------------------
    // &pares → envia o endereço de memória de 'pares'
    // &impares → envia o endereço de memória de 'impares'
    // Assim a função pode modificar diretamente esses valores
    localizarParesImpares(vetor, n, &pares, &impares);

    // ---------------------------------------------------------------
    // Mostra os resultados
    // ---------------------------------------------------------------
    cout << "\n\nQuantidade de pares: " << pares;
    cout << "\nQuantidade de impares: " << impares << endl;

    // ---------------------------------------------------------------
    // Libera a memória alocada com 'new'
    // ---------------------------------------------------------------
    delete[] vetor;

    // Boa prática: evitar vazamento de memória
    vetor = nullptr;

    return 0;
}
