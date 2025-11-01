#include <iostream>
using namespace std;
// funcao para definir qual numero e maior entre 2
int maior(int a, int b)
{
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main () {
    cout << "Digite dois numeros: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "O maior deles = " << maior(num1, num2) << endl;

    return 0;
}