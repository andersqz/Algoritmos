#include <iostream>
using namespace std;

int main() {
    short num;

    cout << "Digite: " << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "PAR" << endl;
    } else {
        cout << "IMPAR" << endl;
    }
    return 0;
}