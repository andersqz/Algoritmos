#include <iostream>
using namespace std;

int main() {
    int n;
    int soma = 0;

    cout << "digite: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        soma = soma + i;
    }
    cout << "a soma de todos os numeros ate " << n << " eh: " << soma << endl;
    return 0;
}