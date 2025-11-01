#pragma once // Isso impede que o arquivo seja incluído mais de uma vez

// Inclui as bibliotecas que as suas funções precisam
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <cctype>

// Usa o namespace std para não precisar escrever std::string, etc.
using namespace std;

// --- DECLARAÇÕES (PROTÓTIPOS) DAS FUNÇÕES ---

int contarLetra(string palavra, char letra);
string primeiroNome(string nomeCompleto);
bool dataValida(string dia, string mes, string ano);
string trocaCaracter(string frase, char letra);
string paraMaiuscula(string frase);
bool vetorOrdenado(int vetor[], int tamanho);
int contarConsoantes(string palavra);
bool ehBissexto(int ano);
string inverterFrase(string frase);
int somaVetor(int vetor[], int tamanho);
int maiorNumero(int vetor[], int tamanho);
string ultimoSobrenome(string nomeCompleto);
int contarVogais(string frase);
int contarPalavras(string& frase);
bool existeArquivo(string nomeArquivo);
string copiarArquivoString(string nomeArquivo);
int contarVogais2(const string& nomeArquivo);
string lerArquivoMaiusculo(const string& nomeArquivo);
int contarPalavras2(const string& nomeArquivo);
string copiarArquivo2String(string nomeArquivo);
string trocarCaracterOrigemDestino(string frase, char letraOrigem, char letraDestino);