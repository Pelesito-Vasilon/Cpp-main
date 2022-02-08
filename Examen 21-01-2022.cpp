#include <iostream>
#include <string>

using namespace std;

int main(){

    cout << "Ismael Belame Granados" << "\n";


    int edadTiburon;
    cout << "¿Cuantos años tiene un tiburon? ";
    cin >> edadTiburon;


    int anios;
    int meses;
    int dias;


    anios = edadTiburon;
    meses = anios*12;
    dias = anios*365;
    cout << anios << " anios son " << meses << " meses o " << dias << " dias." << endl;

    int dientes;

    dientes = 0;
    for (int i = 5; i<96; i++){
    dientes += i;
    }

    cout << "En 8 anios ha perdido " << dientes << " dientes.";
    return 0;
}
