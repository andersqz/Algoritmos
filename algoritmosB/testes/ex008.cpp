#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    float n3, n4;
    char op;

    cout << "Digite um numero: " << endl;
    cin >> n1;
    cout << "Digite outro: " << endl;
    cin >> n2;

    cout << "Escolha uma operacao (+, -, x, /, %): " << endl;
    cin >> op;

    switch (op) {
        case '+':
            cout << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 - n2 << endl;
            break;
        case 'x':
            cout << n1 * n2 << endl;
            break;
        case '/':
            cout << "Como eh divisao escolha mais 2 numeros(NN NN): " << endl;
            cin >> n3 >> n4;
            cout << n3 / n4 << endl;
            break;
        case '%':
            cout << n1 % n2 << endl;
            break;
        default:
            cout << "INVALIDO" << endl;
    }
    return 0;
}