//criar um programa que tenha uma função que receba uma frase e retorne a quantidade de vogais

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

#include "meus-includes\MeusIncludes.cpp"

using namespace std;

int main() {
    //receber frase em um string 
    string frase;
    cout << "Digite uma frase: " << endl;
    getline(cin, frase);

    //receber a quantidade de vogais na frase
    int quantidade_vogais = contarVogais(frase);
    //exibir a quantidade de vogais na frase
    cout << "A frase tem " << quantidade_vogais << " vogais" << endl;
    return 1;
}