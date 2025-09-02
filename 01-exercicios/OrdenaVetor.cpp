#include <iostream>
#include <string>

using namespace std;

bool estaOrdenado(const int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false;
        }
    }
    return true;
}

int main () {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    if (estaOrdenado(vetor, tamanho)) {
        cout << "O vetor esta ordenado." << endl;
    } else {
        cout << "O vetor NAO esta ordenado." << endl;
    }

    return 0;
}