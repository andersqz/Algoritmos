#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string paraMaiuscula(string frase)
{
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]);
    }
    return frase;
}

int qtdPalavras(string frase)
{
    int contador = 0;
    bool emPalavra = false;

    for (int i = 0; i < frase.size(); i++) {
        if (!isspace(frase[i])) {
            if (!emPalavra) {
                contador++;
                emPalavra = true;
            }
        } else {
            emPalavra = false;
        }
    }
    return contador;
}   

int main() {
    string texto;

    cout << "Digite uma frase: " << endl;
    getline(cin, texto);

    string textoModificado = paraMaiuscula(texto);
    int qtdePalavras = qtdPalavras(texto);

    cout << "O texto em maiusculo: " << textoModificado << endl;
    cout << "A qtd de palavras eh: " << qtdePalavras << endl;
    return 0;
}