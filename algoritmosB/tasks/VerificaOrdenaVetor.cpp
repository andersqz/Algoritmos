#include <iostream>
using namespace std;

bool vetorOrdenado(int vetor[], int tamanho);

int main () {
    int n;

    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;

    int v[n];

    cout << "Digite os elementos do vetor: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (vetorOrdenado(v, n)) {
        cout << "O vetor esta ordenado." << endl;
    } else {
        cout << "O vetor NAO esta ordenado." << endl;
    }

    return 0;
}

bool vetorOrdenado(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho -1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false; // achou fora de ordem
        }
    }
    return true; // percorreu tudo sem erro
}