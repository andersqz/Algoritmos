#include <iostream>
using namespace std;

int main() {
    int num[5];
    float media;
    int maior, menor;
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite: " << endl;
        cin >> num[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << num[i] << " ";
    }
    maior = menor = num[0];

    for (int i = 0; i < 5; i++) {
        soma = num[i] + soma;
        if (num[i] > maior) 
            maior = num[i];
        if (num[i] < menor) 
            menor = num[i];    
    }
    media = soma / 5;
    cout << "\n";
    cout << "media: " << media << endl;
    cout << "maior: " << maior << endl;
    cout << "menor: " << menor << endl;
    return 0;
}