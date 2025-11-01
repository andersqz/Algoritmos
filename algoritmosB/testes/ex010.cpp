#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
    float raio;
    float area;

    cout << "Digite o raio do circulo: " << endl;
    cin >> raio;

    area = PI * pow(raio, 2);

    cout << area << endl;
    return 0;
    
}