#include <iostream>
#include <string>
#define N 5

using namespace std;

void lerNomes(string vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: ";
        getline(cin, vetor[i]);
    }
}

void exibirNomes(string vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: " << vetor[i] << endl;
    }
}

void ordenarNomes(string vetor[], int n) {
    string tmp;
    bool houveTroca;

    do {
        houveTroca = false;
        for (int i = 0; i < n; i++) {
            if (vetor[i] > vetor[i+1]) {
                houveTroca = true;
                tmp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = tmp;
            }
        }
    } while (houveTroca);
}



int main () {  
    string nomes[N];
    //rotina para ler /receber nomes completos
    lerNomes(nomes, N);

    //rotina de ordenação
    ordenarNomes(nomes, N);

    //rotina para exibir os nomes completos
    exibirNomes(nomes, N);

    return 1;
}