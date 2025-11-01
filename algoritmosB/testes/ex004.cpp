#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    string linha;

    fin.open("nomes.txt");
    if (!fin.is_open()) {
        cout << "Erro ao abrir o arquivo\n";
        return 1;
    } else {
        while(getline(fin, linha)) {
            cout << linha << endl;
        } cout << "Arquivo aberto corretamente!" << endl;
    }
    fin.close();
    return 0;
}

Ordenação simples
Peça 5 números e mostre em ordem crescente
(pode usar o método da bolha - bubble sort).


#include <iostream>
using namespace std;

int main() {
    int num[5];

    // 1. Leitura
    for (int i = 0; i < 5; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> num[i];
    }

    // 2. Ordenação (método da bolha)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // 3. Exibição
    cout << "\nNumeros em ordem crescente: ";
    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
