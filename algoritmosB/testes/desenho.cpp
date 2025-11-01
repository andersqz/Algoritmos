#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    for (int i = 0; i < 6; i++) {
        limparTela();
        if (i % 2 == 0)
            cout << "### ANDERSON ###" << endl;
        else
            cout << endl;
        this_thread::sleep_for(chrono::milliseconds(400));
    }
}
