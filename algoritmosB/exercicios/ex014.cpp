#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int contarVogais(string frase){
    int contador = 0;
    for (char c : frase) {
        char letra = tolower(c);
        if (letra == 'a' || letra == 'e' || letra == 'i'
            || letra == 'o' || letra == 'u') {
                contador++;
            }
    }
    return contador;
}

int main() {
    string umaFrase;

    cout << "Digite uma frase: " << endl;
    getline(cin, umaFrase);

    int qtdVogais = contarVogais(umaFrase);

    cout << "A quantidade de vogais eh: " << qtdVogais << endl;
    return 0;
}