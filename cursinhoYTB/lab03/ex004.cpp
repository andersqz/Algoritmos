#include <iostream>
using namespace std;

int main () {
    int idade;
    int conv;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    conv = idade * 365;

    cout << idade << " anos eh igual a " << conv << " dias." << endl;
    return 0;
}