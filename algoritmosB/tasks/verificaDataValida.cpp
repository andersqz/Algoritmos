#include <iostream>
#include <string>
using namespace std;

bool dataValida(string dia, string mes, string ano);

int main () {
    string d, m, a;

    cout << "Digite o dia: " << endl;
    cin >> d;
    cout << "Digite o mes: " << endl;
    cin >> m;
    cout << "Digite o ano: " << endl;
    cin >> a;

    if (dataValida(d, m, a)) {
        cout << "DATA VALIDA" << endl;
    } else {
        cout << "DATA INVALIDA" << endl;
    }

    return 0;
}

bool dataValida(string dia, string mes, string ano)
{
    int d = stoi(dia); // converte string em int
    int m = stoi(mes);
    int a = stoi(ano);

    // verifica se o mes eh valido
    if (m < 1 || m > 12) {
        return false;
    }

    // dias maximos de cada mes
    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // ajusa fevereiro para ano bissexto
    bool bissexto = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    if (bissexto) {
        diasMes[1] = 29;
    }

    // verifica se o dia esta no intervalo permitido
    if (d < 1 || d > diasMes[m - 1]) {
        return false;
    }

    return true; // passou em todas verificaçoes
}

