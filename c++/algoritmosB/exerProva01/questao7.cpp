#include <iostream>
#include <string>
#define TAM 5

using namespace std;

typedef struct {
    string nome;
    int matricula;
} Aluno;

void lerDadosAlunos(Aluno vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: ";
        getline(cin, vetor[i].nome);

        cout << "Matricula: ";
        cin >> vetor[i].matricula;
    }
}

void exibirDadosAlunos(Aluno vetor[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nome: " << vetor[i].nome << ". Matricula:  " << vetor[i].matricula << endl;
    }
}

int main () {
    Aluno vetor[5]; // vetor turma tem para cada posiçao um elemento tipo aluno

    lerDadosAlunos(vetor, TAM);
    exibirDadosAlunos(vetor, TAM);

    return 1;
}