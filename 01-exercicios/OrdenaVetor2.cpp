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
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];


    cout << "Digite " << tamanho << " numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> vetor[i];
    }

    if (estaOrdenado(vetor, tamanho)) {
        cout << "O vetor esta ordenado" < endl;
    } else {
        cout << "O vetor NAO esta ordenado" << endl;
    }

    return 0;
}