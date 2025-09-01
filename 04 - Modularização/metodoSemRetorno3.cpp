#include <iostream>
#include <string>

using namespace std;

int main () {
    int dia, mes, ano;
    do {
        cout << "Informe dia: ";
        cin >> dia;
        if (dia < 1 || dia > 31) {
            cout << "Dia fora da faixa permitida... " << endl;
        }
    } while (dia < 1 || dia > 31);
}