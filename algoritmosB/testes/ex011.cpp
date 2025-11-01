#include <iostream>
using namespace std;

int main() {
    float num[2];

    for (int i = 0; i < 3; i++) {
        cout << "numero: " << endl;
        cin >> num[i];
    }

    if (num[0] > num[1] && num[0] > num[2]) {
        cout << "o maior eh " << num[0] << endl;
    }
    else if (num[1] > num[0] && num[1] > num[2]) {
        cout << "o maior eh " << num[1] << endl;
    } else {
        cout << "o maior eh " << num[2] << endl;
    }
    return 0;
}