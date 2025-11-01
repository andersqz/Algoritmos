#include <iostream>
using namespace std;

int main() {
    int num[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite: ";
        cin >> num[i];
    }
    for (int i = 9; i >= 0; i--) {
        cout << num[i] << " ";
    }
    return 0;
}