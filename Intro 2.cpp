#include <iostream>
using namespace std;

int main() {
    string saludo = "Hola!";
    string repetir;
    string contrasena = "aaaa";
    bool esCorrecto;

   /* cout << "Imprimir por pantalla" << endl;
    cout << "Imprimir por pantalla\n";
    cout << "Comprobación de salto de línea";

    cout << saludo << endl;
    cout << saludo << "\n";
    */

    /*while (true){
        cout << "Introduce una palabra: ";
        cin >> repetir;
        cout << repetir << endl;
    }
    */

    /*while (!esCorrecto){
        cout << "Introduce la contraseña: ";
        cin >> repetir;
        if (repetir == contrasena){
            esCorrecto = true;
        }
    }
    */

    cout << "¿Cuantos anios tienes?";
    cin >> edadIntroducida;

    if (edadIntroducida >= edad){
        cout << "Eres un viejo.";
    } else {
        cout << "Eres un bb.";
    }


    return 0;
