#include <iostream>
#include <string>
using namespace std;

string inverterFrase(string frase);
int main () {
    string frase;

    cout << "Digite uma frase: " << endl;
    getline(cin, frase); // pega linha inteira

    string invertida = inverterFrase(frase);

    cout << "Frase invertida: " << invertida << endl;

    return 0;
}

string inverterFrase(string frase) 
{
    string resultado = "";

    for (int i = frase.size() - 1; i >= 0; i--) {
        resultado += frase[i];
    }

    return resultado;
}