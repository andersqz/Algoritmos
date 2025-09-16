#include <iostream>
#include <string>
using namespace std;

int contarVogais(string frase);

int main () {
    string texto;

    cout << "Digite uma frase: " << endl;
    getline(cin, texto); // permite ler frases com espaços

    int qtd = contarVogais(texto);

    cout << "Quantidade de vogais na frase: " << qtd << endl;

    return 0;
}

// definição da função
int contarVogais(string frase) 
{
    int contador = 0;

    for (char c : frase) {
        // transformar em minuscula para facilitar a comparaçao
        char letra = tolower(c);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }
    }

    return contador;

}