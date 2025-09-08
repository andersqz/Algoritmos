#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inicializar();
void ligar();
void verificar();
void ativar();

int main () {
    srand(time(NULL));

    inicializar();

    return 0;
}

void inicializar()
{
    cout << "Inicializando sistema" << endl;
    ligar();
    verificar();
    ativar();
    cout << "Inicializacao concluida" << endl;

    int num = rand();

    if (num > 16284) {
        cout << "Sistema em funcionamento";
    } else {
        cout << "Falha na inicializacao";
    }

}

void ligar()
{
    cout << "- Ligando dispositivo" << endl;
}

void verificar()
{
    cout << "- Verificando integridade" << endl;
}

void ativar()
{
    cout << "- Ativando processos" << endl;
}