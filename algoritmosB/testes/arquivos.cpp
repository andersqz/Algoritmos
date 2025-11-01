#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int num = 45;
    ofstream fout;
    fout.open("nomes.txt");

    fout << "GACHIAKUTA" << endl;
    fout << num << endl;
    fout << "arquivo" << endl;

    fout.close();
    return 0;
}