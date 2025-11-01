#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    int tv = 0;

    cout << "digite: " << endl;
    cin >> palavra;

    for (int i = 0; i < palavra.size(); i++) {
        char c = tolower(palavra[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        tv++;
    }
    cout << palavra << endl;
    cout << tv << endl;
    return 0;
}