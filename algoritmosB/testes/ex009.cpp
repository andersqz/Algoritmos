#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "numero: " << endl;
    cin >> num;

    float numFloat = (float)num + num;
    float metadeNumFloat = (float)num / 2;
    char numChar = (char)num;
    
    cout << metadeNumFloat << endl;
    cout << numFloat << endl;
    cout << numChar << endl;
    return 0;
}