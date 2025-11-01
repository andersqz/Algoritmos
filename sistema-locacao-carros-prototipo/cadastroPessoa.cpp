#include <iostream>
#include <string>
#include <algorithm> // ADICIONADO: Necessário para a função std::remove

using namespace std;

// A DEFINIÇÃO DA STRUCT FOI MOVIDA PARA CIMA
// O compilador precisa saber o que é "Pessoa" antes que qualquer função a utilize.
typedef struct {
    string nome;
    string cpf;
    string endereco;
} Pessoa;

// O protótipo da função agora pode "enxergar" o tipo Pessoa
Pessoa cadastraPessoa();

bool validarCpf(string cpf)
{
    // Remove os caracteres '.' e '-' para validar apenas os números
    cpf.erase(remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(remove(cpf.begin(), cpf.end(), '-'), cpf.end());

    if (cpf.length() != 11) {
        return false;
    }
    return true;
}

Pessoa cadastraPessoa()
{
    Pessoa p;

    cout << "==== CADASTRO DO LOCATÁRIO ====" << endl;
    cout << "Qual seu nome? " << endl;
    getline(cin, p.nome);

    do {
        cout << "Digite seu CPF (apenas números ou formato xxx.xxx.xxx-xx): " << endl;
        getline(cin, p.cpf);

        if (!validarCpf(p.cpf)) {
            // CORRIGIDO: A mensagem de erro agora está DENTRO do if
            cout << "CPF inválido! O CPF deve conter exatamente 11 dígitos." << endl;
        }
    } while (!validarCpf(p.cpf));

    // REMOVIDO: A linha "cout << "CPF inválido!" << endl;" foi retirada daqui

    cout << "Endereço onde mora: " << endl;
    getline(cin, p.endereco);
    cout << "\nCadastro concluído com sucesso!" << endl;
    return p;
}

int main() {
    Pessoa cliente = cadastraPessoa();

    cout << "\n==== DADOS CADASTRADOS ====" << endl;
    cout << "Nome: " << cliente.nome << endl;
    cout << "CPF: " << cliente.cpf << endl;
    cout << "Endereço: " << cliente.endereco << endl;

    

    return 0;
}