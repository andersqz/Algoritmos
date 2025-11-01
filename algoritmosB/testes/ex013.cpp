#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "digite um numero para ver sua tabuada ate 10: " << endl;
    cin >> num;
    for (int i = 0; i < 11; i++) {
        int resultado = num * i;
        cout << num << " X " << i << " = " << resultado << endl;
    }
    return 0;
}