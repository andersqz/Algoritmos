#include <iostream>
using namespace std;

void linha();
void pequena();
void media();
void grande();

int main () {
    cout << "Trabalhando com funcoes ..." << endl;

    pequena(); cout << endl;
    media(); cout << endl;
    grande(); cout << endl;

    cout << "programacaoo de computadores" << endl;

    grande(); cout << endl;
    media(); cout << endl;
    pequena(); cout << endl;

    return 0;
}

void linha()
{
    cout << "----------";
}

void pequena()
{
    linha();
}

void media() 
{
    linha();
    linha();
}

void grande()
{
    linha();
    linha();
    linha();
}