/*#include <iostream>
using namespace std;
#define black "\033[7;37;40m"
#define yellow "\033[1;33;44m"
#define green "\033[32m"
#define red "\033[4;31m"
#define foreg "\033[38;5;154m"
#define backg "\033[38;5;0;48;5;154m"
#define default "\033[m"
int main()
{
 cout << black << "Preto no Branco" << default << endl;
 cout << yellow << "Amarelo Intenso com Azul" << default << endl;
 cout << green << "Verde Normal" << default << endl;
 cout << red << "Vermelho Sublinhado" << default << endl;
 cout << foreg << "256 Cores" << default << endl;
 cout << backg << "256 Cores" << default << endl;
 return 0;
}*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "short tem " << sizeof n_short << " bytes\n";
    cout << "int tem " << sizeof(int) << " bytes\n";
    cout << "long tem " << sizeof(long) << " bytes\n";
    cout << "long long tem " << sizeof n_llong << " bytes\n" << endl;

    cout << "valores maximos:\n";
    cout << "short: " << n_short << endl;
    cout << "int: " << n_int << endl;
    cout << "long: " << n_long << endl;
    cout << "llong: " << n_llong << endl;
    return 0;
}