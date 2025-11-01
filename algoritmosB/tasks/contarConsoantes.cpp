#include <iostream>
#include <cctype> // para tolower
using namespace std;

int contarConsoantes(string palavra);

int main () {
    string palavra;

    cout << "Digite uma palavra: " << endl;
    cin >> palavra;

    int qtd = contarConsoantes(palavra);

    cout << "A palavra \"" << palavra << "\" possui " << qtd << " consoantes" <<  endl;

    return 0;
}

//definição
int contarConsoantes(string palavra) 
{
    int cont = 0;
    string vogais = "aeiou";

    for (char c : palavra) {
        c = tolower(c); // deixa minusculo para facilitar a comparação
        if (isalpha(c) && vogais.find(c) == string::npos) {
            cont++;
        }
    }

    return cont;
    
}