#include <iostream>
using namespace std;

bool ehBissexto(int ano);

int main () {
    int ano;
    cout << "Digite um ano: " << endl;
    cin >> ano;

    if (ehBissexto(ano)) {
        cout << ano << " eh bissexto!" << endl;
    } else {
        cout << ano << "nao eh bissexto!" << endl;
    }

    return 0;

}

bool ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    }
    return false;
}