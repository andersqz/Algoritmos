#include <iostream>
using namespace std;

void sorriso();

int main () {
    cout << "Chamando funcoes para o main" << endl;

    sorriso(); sorriso(); sorriso();
    cout << endl;

    sorriso(); sorriso();
    cout << endl;
    
    sorriso();
    return 0;
}

void sorriso() {
    cout << "Sorria! ";
}