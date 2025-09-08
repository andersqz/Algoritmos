#include <iostream>
using namespace std;

int main () {
    int peso;
    float corrida;
    float ciclismo;
    float natacao;
    int Hcorrida, Mcorrida;
    int Hciclismo, Mciclismo;
    int Hnatacao, Mnatacao;
    float total;

    cout << "Digite seu peso: " << endl;
    cin >> peso;

    cout << "Digite o tempo de corrida: " << endl;
    cin >> Hcorrida >> Mcorrida;

    cout << "Digite o tempo de ciclismo: " << endl;
    cin >> Hciclismo >> Mciclismo;

    cout << "Digite o tempo de natacao: " << endl;
    cin >> Hnatacao >> Mnatacao;

    corrida = 7.0 * peso * ((Hcorrida * 60 + Mcorrida) / 60);
    ciclismo = 7.0 * peso * ((Hciclismo * 60 + Mciclismo) / 60);
    natacao = 8.0 * peso * ((Hnatacao * 60 + Mnatacao) / 60);

    total = corrida + ciclismo + natacao;

    cout << "Voce gastou um total de " << total << " calorias ..." << endl;

    return 0;


}