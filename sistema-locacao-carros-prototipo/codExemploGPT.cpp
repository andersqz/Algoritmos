#include <iostream>     // Biblioteca padrão de entrada e saída (cout, cin)
#include <string>       // Manipulação de strings
#include <algorithm>    // Para usar funções como remove()
#include <fstream>      // Para manipulação de arquivos
#include <ctime>        // Para pegar data e hora atuais
#include <sstream>      // Para separar dados do arquivo por delimitador ";"
#include <vector>       // Vetor dinâmico (parecido com um array que cresce sozinho)
using namespace std;

// =============================================================
// STRUCTS: definem os tipos personalizados de dados
// =============================================================

// Estrutura que representa um CARRO
typedef struct {
    string placa;
    string horaEntrada; // Data e hora do cadastro
    float valor;        // Valor do aluguel
    int ano;
    string cor;
    bool alugado;       // true = alugado | false = disponível
    string modelo;
} Carro;

// Estrutura que representa uma PESSOA (locatário)
typedef struct {
    string nome;
    string cpf;
    string endereco;
} Pessoa;

// =============================================================
// PROTÓTIPOS DAS FUNÇÕES (declaração antes do uso)
// =============================================================
Pessoa cadastroPessoa();
bool validarCpf(string cpf);
bool usuarioExiste(string cpf);
void cadastrarCarro();
void listarCarros();
void alugarCarro();
void menuPrincipal();
string dataHoraAtual();

// =============================================================
// FUNÇÃO: pegar data e hora atuais
// =============================================================
string dataHoraAtual() {
    // time_t é um tipo que armazena o tempo em segundos desde 1970
    time_t agora = time(0);

    // Converte o tempo em formato legível (dia/mês/ano hora:min:seg)
    tm *tempoLocal = localtime(&agora);

    // Usa um stringstream para formatar como string
    stringstream ss;
    ss << tempoLocal->tm_mday << "/" 
       << tempoLocal->tm_mon + 1 << "/" 
       << tempoLocal->tm_year + 1900 << " - "
       << tempoLocal->tm_hour << ":" 
       << tempoLocal->tm_min << ":" 
       << tempoLocal->tm_sec;
    
    return ss.str(); // Retorna string com data/hora formatada
}

// =============================================================
// FUNÇÃO: validar CPF (verifica se tem 11 dígitos numéricos)
// =============================================================
bool validarCpf(string cpf) {
    // Remove pontos e traços do CPF
    cpf.erase(remove(cpf.begin(), cpf.end(), '.'), cpf.end());
    cpf.erase(remove(cpf.begin(), cpf.end(), '-'), cpf.end());

    // Retorna verdadeiro se tiver 11 caracteres
    return cpf.length() == 11;
}

// =============================================================
// FUNÇÃO: verificar se o usuário já existe no arquivo
// =============================================================
bool usuarioExiste(string cpf) {
    ifstream arquivo("locatarios.txt"); // Abre arquivo para leitura
    if (!arquivo.is_open()) return false;

    string linha;
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        string nome, cpfArq, endereco;

        // Divide a linha em partes (separadas por ";")
        getline(ss, nome, ';');
        getline(ss, cpfArq, ';');
        getline(ss, endereco, ';');

        if (cpfArq == cpf) {
            arquivo.close();
            return true;
        }
    }

    arquivo.close();
    return false;
}

// =============================================================
// FUNÇÃO: cadastrar locatário
// =============================================================
Pessoa cadastroPessoa() {
    Pessoa p;
    cin.ignore(); // Limpa buffer de entrada

    cout << "\n==== CADASTRO DO LOCATÁRIO ====\n";
    cout << "Digite seu nome completo: ";
    getline(cin, p.nome);

    // Validação do CPF (só continua se for válido)
    do {
        cout << "Digite seu CPF (somente números, 11 dígitos): ";
        getline(cin, p.cpf);
        if (!validarCpf(p.cpf))
            cout << "CPF inválido! Tente novamente.\n";
    } while (!validarCpf(p.cpf));

    cout << "Digite seu endereço (Rua e número): ";
    getline(cin, p.endereco);

    // Salva os dados no arquivo locatarios.txt
    ofstream arquivo("locatarios.txt", ios::app);
    if (arquivo.is_open()) {
        arquivo << p.nome << ";" << p.cpf << ";" << p.endereco << "\n";
        arquivo.close();
        cout << "Locatário salvo com sucesso!\n";
    } else {
        cout << "Erro ao abrir o arquivo de locatários!\n";
    }

    return p;
}

// =============================================================
// FUNÇÃO: cadastrar carro
// =============================================================
void cadastrarCarro() {
    Carro c;
    cin.ignore();

    cout << "\n==== CADASTRO DE CARRO ====\n";
    cout << "Modelo: ";
    getline(cin, c.modelo);

    cout << "Placa: ";
    getline(cin, c.placa);

    cout << "Cor: ";
    getline(cin, c.cor);

    cout << "Ano: ";
    cin >> c.ano;

    cout << "Valor do aluguel (por dia): ";
    cin >> c.valor;

    c.alugado = false; // Por padrão, o carro é cadastrado como disponível
    c.horaEntrada = dataHoraAtual(); // Captura data e hora do cadastro

    // Salva o carro em "carros.txt"
    ofstream arquivo("carros.txt", ios::app);
    if (arquivo.is_open()) {
        arquivo << c.modelo << ";" << c.placa << ";" << c.cor << ";" 
                << c.ano << ";" << c.valor << ";" << c.horaEntrada << ";" << c.alugado << "\n";
        arquivo.close();
        cout << "Carro cadastrado com sucesso!\n";
    } else {
        cout << "Erro ao abrir o arquivo de carros!\n";
    }
}

// =============================================================
// FUNÇÃO: listar carros cadastrados
// =============================================================
void listarCarros() {
    ifstream arquivo("carros.txt");
    if (!arquivo.is_open()) {
        cout << "Nenhum carro cadastrado.\n";
        return;
    }

    string linha;
    cout << "\n==== LISTA DE CARROS ====\n";
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        Carro c;

        getline(ss, c.modelo, ';');
        getline(ss, c.placa, ';');
        getline(ss, c.cor, ';');
        ss >> c.ano;
        ss.ignore();
        ss >> c.valor;
        ss.ignore();
        getline(ss, c.horaEntrada, ';');
        ss >> c.alugado;

        cout << "Modelo: " << c.modelo
             << " | Placa: " << c.placa
             << " | Cor: " << c.cor
             << " | Ano: " << c.ano
             << " | Valor: R$" << c.valor
             << " | Cadastro: " << c.horaEntrada
             << " | Status: " << (c.alugado ? "Alugado" : "Disponível") << endl;
    }
    arquivo.close();
}

// =============================================================
// FUNÇÃO: alugar carro
// =============================================================
void alugarCarro() {
    string cpf, placa;
    cin.ignore();

    cout << "\n==== ALUGAR CARRO ====\n";
    cout << "Digite seu CPF: ";
    getline(cin, cpf);

    // Verifica se o usuário já está cadastrado
    if (!usuarioExiste(cpf)) {
        cout << "Usuário não encontrado! Deseja se cadastrar? (S/N): ";
        char opc;
        cin >> opc;

        if (toupper(opc) == 'S') {
            cadastroPessoa();
        } else {
            cout << "Aluguel cancelado.\n";
            return;
        }
        cin.ignore();
    }

    cout << "Digite a PLACA do carro que deseja alugar: ";
    getline(cin, placa);

    // Lê todos os carros do arquivo e armazena no vetor
    ifstream arqIn("carros.txt");
    if (!arqIn.is_open()) {
        cout << "Nenhum carro cadastrado.\n";
        return;
    }

    vector<Carro> carros;
    string linha;
    while (getline(arqIn, linha)) {
        stringstream ss(linha);
        Carro c;
        getline(ss, c.modelo, ';');
        getline(ss, c.placa, ';');
        getline(ss, c.cor, ';');
        ss >> c.ano;
        ss.ignore();
        ss >> c.valor;
        ss.ignore();
        getline(ss, c.horaEntrada, ';');
        ss >> c.alugado;
        carros.push_back(c);
    }
    arqIn.close();

    bool encontrado = false;

    // Percorre os carros para encontrar o que o usuário quer
    for (auto &c : carros) {
        if (c.placa == placa) {
            encontrado = true;

            if (c.alugado) {
                cout << "Este carro já está alugado!\n";
            } else {
                c.alugado = true;
                string horaAluguel = dataHoraAtual();

                // Registra o aluguel no arquivo alugueis.txt
                ofstream arqAluguel("alugueis.txt", ios::app);
                if (arqAluguel.is_open()) {
                    arqAluguel << cpf << ";" << c.modelo << ";" << c.placa 
                               << ";" << horaAluguel << "\n";
                    arqAluguel.close();
                    cout << "Carro alugado com sucesso!\n";
                } else {
                    cout << "Erro ao salvar o aluguel!\n";
                }
            }
            break;
        }
    }

    if (!encontrado) {
        cout << "Carro não encontrado!\n";
        return;
    }

    // Atualiza o status dos carros no arquivo
    ofstream arqOut("carros.txt");
    for (auto &c : carros) {
        arqOut << c.modelo << ";" << c.placa << ";" << c.cor << ";" 
               << c.ano << ";" << c.valor << ";" << c.horaEntrada << ";" << c.alugado << "\n";
    }
    arqOut.close();
}

// =============================================================
// FUNÇÃO: menu principal com switch-case
// =============================================================
void menuPrincipal() {
    int opcao;

    do {
        cout << "\n========= MENU =========\n";
        cout << "1 - Cadastrar locatário\n";
        cout << "2 - Cadastrar carro\n";
        cout << "3 - Alugar carro\n";
        cout << "4 - Listar carros\n";
        cout << "5 - Sair\n";
        cout << "========================\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: cadastroPessoa(); break;
            case 2: cadastrarCarro(); break;
            case 3: alugarCarro(); break;
            case 4: listarCarros(); break;
            case 5: cout << "Saindo do programa...\n"; break;
            default: cout << "Opção inválida!\n";
        }
    } while (opcao != 5);
}

// =============================================================
// FUNÇÃO MAIN
// =============================================================
int main() {
    menuPrincipal(); // Inicia o programa chamando o menu
    return 0;
}
