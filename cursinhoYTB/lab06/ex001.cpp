/*A empresa Viagens&Turismo possui uma linha de ônibus fazendo o trecho 
Mossoró-Natal. Considerando que as viagens são feitas sempre dentro de um 
mesmo dia, elabore um programa que permita ao usuário informar o momento de 
partida e de chegada (hora e minuto) do ônibus. O programa deve calcular o tempo 
total da viagem (em horas e minutos). 
Digite o horário de partida (HH:MM): 10:50 
Digite o horário de chegada (HH:MM): 14:20 
O tempo total de viagem foi 3 horas e 30 min.*/

#include <iostream>
using namespace std;

int main(){
    int horaPartida, minutoPartida;
    int horaChegada, minutoChegada;
    char separador;

    cout << "Tempo de viagem Mossoro-Natal! " << endl;
    cout << "Digite o horario de partida (HH:MM): " << endl;
    cin >> horaPartida >> separador >> minutoPartida;
    cout << "Digite o horario de chegada (HH:MM)" << endl;
    cin >> horaChegada >> separador >> minutoChegada;

    int partidaTotal = horaPartida * 60 + minutoPartida;
    int chegadaTotal = horaChegada * 60 + minutoChegada;
    int duracao = chegadaTotal - partidaTotal;
    int horas = duracao / 60;
    int minutos = duracao % 60;

    cout << "O tempo total de viagem foi de " << horas << " hora e " << minutos << " minutos." << endl;
    return 0; 
}