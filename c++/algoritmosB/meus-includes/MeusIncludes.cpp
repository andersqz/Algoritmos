#include "MeusIncludes.h"



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



// definição da função que conta quantas vogais tem na frase
int contarVogais(string frase) {
    int contador = 0;

    for (char c : frase) {
        char letra = tolower(c);

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contador++;
        }
    }

    return contador;
}



//-------------------------------------------



// função que transforma letras minusculas em maiusculas
string paraMaiuscula(string frase) {
    for (char &c : frase) {   // percorre cada caractere por referência
        c = toupper(c);       // transforma em maiúscula
    }
    return frase;
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
