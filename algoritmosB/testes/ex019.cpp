#include <iostream>
using namesapce std;

int main() {
    int num[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite: ";
        cin >> num[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - 1; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    cout << "\nnumeros em ordem crescente: ";
    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }

    return 0;
}