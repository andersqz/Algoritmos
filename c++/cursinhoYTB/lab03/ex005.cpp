#include <iostream>
using namespace std;

int main () {
    int anosFumando;
    int numCigarros;
    float precoCigarro;
    int anosParaDias;
    int qtdCigarros;
    float valorGasto;
    float precoPorCigarro;

    cout << "Quantos anos voce fuma? " << endl;
    cin >> anosFumando;

    cout << "Quantos cigarros por dia voce fuma? " << endl;
    cin >> numCigarros;

    cout << "Qual o preco da carteira com 20 cigarros? " << endl;
    cin >> precoCigarro;

    anosParaDias = anosFumando * 365;
    qtdCigarros = anosParaDias * numCigarros;
    precoPorCigarro = precoCigarro / 20;
    valorGasto = qtdCigarros * precoPorCigarro;

    cout << "Voce fuma a " << anosFumando << " anos, " << numCigarros << " cigarros por dia, e ja gastou " << valorGasto << " ate agora ..." << endl;
    return 0;
}