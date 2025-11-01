#include <iostream>
#include <string>
using namespace std;

string paraMaiuscula(string frase);

int main () {
    string texto;

    cout << "Digite uma frase: " << endl;
    getline(cin, texto);

    string resultado = paraMaiuscula(texto);

    cout << "Frase em maiusculas: " << resultado << endl;

    return 0;
}

string paraMaiuscula(string frase)
{
    for (char &c : frase) { //percorre cada caractere por referencia
        c = toupper(c); // transforma em maiuscula
    }
    return frase;
}