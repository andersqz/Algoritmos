#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string trocaCaracter(string frase, char letra)
{
    for (int i = 0; i < frase.size(); i++) {
        if (toupper(frase[i]) == toupper(letra)) {
            frase[i] = '@';
        }
    }
    return frase;
}

int main() {
    string texto;
    char caractere;

    cout << "Digite uma frase: " << endl;
    getline(cin, texto);
    cout << "Digite um caractere: " << endl;
    cin >> caractere;

    string textoModificado = trocaCaracter(texto, caractere);

    cout << "O texto modificado ficou: " << textoModificado << endl;
    return 0;
}
