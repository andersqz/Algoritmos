
#include <sstream>
#include <fstream>
#include <iostream>
#include "MeusIncludes.h"




using namespace std;




// função que retorna quantas letras especificas tem na palavra
int contarLetra(string palavra, char letra) {
    int contador = 0;

    for (int i = 0; i < palavra.size(); i++) {
        if (palavra[i] == letra) {
            contador++;
        }
    }

    return contador;
}



//---------------------------------------------



//funçao que retira apenas o primeiro nome de um nome completo
string primeiroNome(string nomeCompleto) 
{
    int pos = nomeCompleto.find(" "); // procura o primeiro espaço
    if (pos != string::npos) { //se encontrou espaço
        return nomeCompleto.substr(0, pos); //pega do inicio ate o espaço
    } else {
        return nomeCompleto; // se nao tem espaço, retorna o nome todo
    }
}



//------------------------------------------------



// definição da funçao que determina se a data eh valida ou invalida
bool dataValida(string dia, string mes, string ano) {
    int d = stoi(dia);
    int m = stoi(mes);
    int a = stoi(ano);

    if (m < 1 || m > 12)
        return false;

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool bissexto = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    if (bissexto)
        diasMes[1] = 29;

    if (d < 1 || d > diasMes[m - 1]) {
        return false;
    }

    return true;
} // <-- fecha a função aqui corretamente



//-------------------------------------------------------

//recebe uma string e pesquisar uma letra e devolver em char @
string trocaCaracter(string frase, char letra) {
    for (int i = 0; i < frase.size(); i++) {
        if (toupper(frase[i]) == toupper(letra)) {
            frase[i] = '@';
        }
    }
    return frase;
}

//-------------------------------------------



// Função que transforma uma frase em maiúsculo
string toMaiusculo(string frase) {
    for (int i = 0; i < frase.size(); i++) {
        frase[i] = toupper(frase[i]); // transforma cada caractere
    }
    return frase; // retorna a frase modificada
}




//-----------------------------------------------




// definição da funçao que percorre um vetor e verifica se esta ordenado ou desordenado retorna true ou false
bool vetorOrdenado(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        if (vetor[i] > vetor[i + 1]) {
            return false; // achou fora de ordem
        }
    }
    return true; // percorreu tudo sem erro
}



//---------------------------------------------




//função que conta quantas consoantes tem na palavra
int contarConsoantes(string palavra) {
    int cont = 0;
    string vogais = "aeiou";

    for (char c : palavra) {
        c = tolower(c); // deixa minúsculo para facilitar a comparação
        if (isalpha(c) && vogais.find(c) == string::npos) {
            cont++;
        }
    }

    return cont;
}



//------------------------------------------



//função que verifica se o ano eh bissexto ou nao
bool ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    }
    return false;
}




//--------------------------------------------



//funçao que inverte uma frase
string inverterFrase(string frase) {
    string resultado = "";

    for (int i = frase.size() - 1; i >= 0; i--) {
        resultado += frase[i];
    }

    return resultado;
}




//--------------------------------------------------



//funçao que retorna a soma dos elementos do vetor
int somaVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}




//--------------------------------------------------------




//funçao que retorna o maior elemento de um vetor
int maiorNumero(int vetor[], int tamanho) {
    int maior = vetor[0]; // assume que o primeiro é o maior inicialmente
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}




//------------------------------------------------------



//funcao que pega o ultimo sobrenome
string ultimoSobrenome(string nomeCompleto) {
    int pos = nomeCompleto.find_last_of(' '); // acha o último espaço

    if (pos == string::npos) {
        // não tem espaço → só um nome
        return nomeCompleto;
    }

    return nomeCompleto.substr(pos + 1); // pega do último espaço até o fim
}



//---------------------------



int contarVogais(string frase) {
    int totalVogais = 0;

    for (int i = 0; i < frase.size(); i++) {
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U' ||
            frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {
                totalVogais += 1;
        }
    }

    return totalVogais;
}

//--------------------------------------------

int contarPalavras(string& frase) {
    istringstream stream(frase);
    string palavra;
    int contagem = 0;

    //enquanto houver palavras na frase
    while (stream >> palavra) {
        contagem++;
    }
    return contagem;
}



// funcao que conta quantas palavras tem na string
int contarPalavras(string frase) {
    int contador = 0;
    bool emPalavra = false;

    for (int i = 0; i < frase.size(); i++) {
        if (!isspace(frase[i])) { // se não é espaço
            if (!emPalavra) { // início de uma palavra
                contador++;
                emPalavra = true;
            }
        } else { // se é espaço
            emPalavra = false;
        }
    }

    return contador;
}



//-------------------------------------------------

bool existeArquivo(string nomeArquivo) {
    ifstream procuradorArquivo; 
    procuradorArquivo.open(nomeArquivo);

    if (procuradorArquivo) {
        procuradorArquivo.close();
        return true;
    }
    return false;
}

string copiarArquivoString(string nomeArquivo) {
    ifstream procuradorArquivo;
    procuradorArquivo.open(nomeArquivo);

    string resposta = "";
    string linha;
    while (!procuradorArquivo.eof()) {
        getline(procuradorArquivo,linha);
        resposta = resposta + linha + "\n";
    }
    procuradorArquivo.close();

    return resposta;
}

//------------------------------------------------

int contarVogais2(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo); // abre arquivo para leitura
    if (!arquivo.is_open()) {
        return -1; // erro ao abrir
    }

    char c;
    int contador = 0;

    while (arquivo.get(c)) { // lê caractere por caractere
        c = tolower(c); // converte para minúsculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    arquivo.close();
    return contador;
}


// Função que lê um arquivo e retorna uma string com o conteúdo em maiúsculo
string lerArquivoMaiusculo(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        return "Erro ao abrir o arquivo!";
    }

    string linha, resultado;

    while (getline(arquivo, linha)) {
        for (char& c : linha) {
            c = toupper(c);
        }
        resultado += linha + "\n";
    }

    arquivo.close();
    return resultado;
}


// Função que conta a quantidade de palavras em um arquivo
int contarPalavras2(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        return -1; // erro ao abrir
    }

    string linha, palavra;
    int contador = 0;

    while (getline(arquivo, linha)) {
        istringstream iss(linha); // separa linha em palavras
        while (iss >> palavra) {
            contador++;
        }
    }

    arquivo.close();
    return contador;
}


//================================================

string copiarArquivo2String(string nomeArquivo) {
    ifstream procuradorArquivo; //tipo de arquivo para leitura
    procuradorArquivo.open(nomeArquivo); 

    string resposta = "";
    string linha;
    while (!procuradorArquivo.eof()) {
		getline(procuradorArquivo,linha); //lendo a linha inteira
		resposta = resposta + linha + "\n";
	}


    //-----------------------------------------------

    string trocarCaracterOrigemDestino(string frase, char letraOrigem, char letraDestino) {
    for (int i = 0; i < frase.size(); i++) {
        if (toupper(frase[i]) == toupper(letraOrigem)) {
            frase[i] = letraDestino;
        }
    }
    return frase;
}