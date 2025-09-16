#include <iostream>

using namespace std;

float paraFaren(float celsius);

int main () {
    float celsius, fahrenheit;

    cout << "Digite uma temperatura em celsius: " << endl;
    cin >> celsius;

    fahrenheit = paraFaren(celsius);
 
    cout << celsius << " Graus equivalem a " << fahrenheit << " Graus fahrenheit." << endl;

    return 0;
}

float paraFaren(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}