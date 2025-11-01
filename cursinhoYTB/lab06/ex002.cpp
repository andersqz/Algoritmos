/* Utilize a diretiva #define para criar constantes simbólicas para o preço de um pão 
(R$0,30) e para o preço de um pastel (R$0,25). Na função principal, peça para o 
usuário informar quantos pães e quantos pasteis ele quer. Utilize as constantes 
simbólicas que representam os preços dos produtos para fazer o cálculo de quanto 
o usuário vai pagar, e mostre o resultado na tela. 
Pães&Cia 
Quantos pães? 5 
Quantos pastéis? 4 
O total das compras é R$2.50 */

#include <iostream>
#include <iomanip   >
#define pastel 0.25
#define pao 0.30
using namespace std;

int main() {
    int Pao, Pastel;

    cout << "Quantos paes voce quer? " << endl;
    cin >> Pao;
    cout << "Quantos pasteis voce quer? " << endl;
    cin >> Pastel;

    float precoPao = Pao * pao;
    float precoPastel = Pastel * pastel;
    float totalCompra =  precoPao + precoPastel;

    cout << fixed << setprecision(2);
    cout << "O total da compra eh R$" << totalCompra << endl;
    return 0;
}