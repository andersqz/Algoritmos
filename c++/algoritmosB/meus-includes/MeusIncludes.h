#ifndef MINHA_BIBLIOTECA_H
#define MINHA_BIBLIOTECA_H

#include <string>
using namespace std;

// função que retira apenas o primeiro nome do nome completo e retorna ele
string primeiroNome(string nomeCompleto);

// função que retorna quantas vezes determinada letra aparece na palavra
int contarLetra(string palavra, char letra);

// função que determina se a data eh valida ou invalida
bool dataValida(string dia, string mes, string ano);

// função que conta quantas vogais tem na frase
int contarVogais(string frase);

//função que transforma letras minusculas em maiusculas
string paraMaiuscula(string frase);

//funçao que recebe o vetor de inteiros e seu tamanho e percorre os elementos verificando se o vetor esta ordenado ou desordenado, trazendo true ou false
bool vetorOrdenado(int vetor[], int tamanho);

// função que conta quantas consoantes tem na palavra
int contarConsoantes(string palavra);

//função que verifica se o ano eh bissexto ou nao
bool ehBissexto(int ano);

//função que inverte uma frase 
string inverterFrase(string frase);

//funçao que retorna a soma dos elementos do vetor
int somaVetor(int vetor[], int tamanho);

//função que retorna o maior elemento de um veotr
int maiorNumero(int vetor[], int tamanho);

//funcao que pega o ultimo sobrenome
string ultimoSobrenome(string nomeCompleto);

#endif
