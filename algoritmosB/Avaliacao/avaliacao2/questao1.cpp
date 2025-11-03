/*Questão 1) Construir um programa em que o usuário insira/digite 10 nomes completos de pessoas 
(validar se o nome lido tem duas palavras no mínimo). 
Esses nomes devem ser transformados para maiúsculo e armazenados em um vetor de tamanho 10 (ou TAM 10). 
Ao final, esses nomes devem ser exibidos. 
Contudo, o programa deve ser composto por métodos (com ou sem retorno).*/

#include <iostream>
#include <string>
#define TAM 10
using namespace std;

string toMaiusculo(string frase) {
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]); // transforma cada caractere
    }
    return frase; // retorna a frase modificada
}

int main() {
    string nomes;
    string vetorDeNomes[TAM];
    string nomeModificado;

    for (int i = 0; i < TAM; i++) {
        cout << "Nome: ";
        getline(cin, nomes);
        nomeModificado = toMaiusculo(nomes);
        vetorDeNomes[i] = nomeModificado;
    }

    for (int i = 0; i < TAM; i++) {
        cout << vetorDeNomes[i] << endl;
    }
    return 0;
}