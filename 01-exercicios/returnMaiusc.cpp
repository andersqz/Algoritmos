#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string paraMaiuscula(const string& frase) {
    string resultado = frase;
    for (char &c : resultado) {
        c = toupper(c);
    }
    return resultado;
}

int main () {
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    string fraseMaiuscula = paraMaiuscula(frase);

    cout << "Frase em maiusculas: " << fraseMaiuscula << endl;

    return 0;
}