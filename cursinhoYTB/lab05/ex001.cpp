#include <iostream>

using namespace std;

void horario(int, int);

int main () {
    int h, m;

    cout << "Digite o numero de horas: " << endl;
    cin >> h;

    cout << "Digite o numero de minutos: " << endl;
    cin >> m;

    horario(h, m);

    return 0;

}

void horario(int a, int b) 
{
    cout << "Agora sao " << a << ":" << b << endl;
}