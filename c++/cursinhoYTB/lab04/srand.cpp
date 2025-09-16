#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int main () {

    srand(time(NULL));
    int num = rand();
    cout << "gerando numero " << num << endl;
    if (num > 16834) {
        cout << "GRANDE"; 
    } else {
        cout << "PEQUENO";
    }

    return 0;
}