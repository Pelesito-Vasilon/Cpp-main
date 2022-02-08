#include <iostream>
using namespace std;

class Persona{
    private:
        char nombre[20];
        int edad;
        float sueldo;

    public:
        void asignarSueldo (float nuevoSueldo){
            this->sueldo = nuevoSueldo;
        }
        float consultarSueldo(){
            return this->sueldo;
        }
};

int main() {
    Persona celia;
    float sueldoCelia;

    celia.asignarSueldo(100);
    sueldoCelia = celia.consultarSueldo();
    cout << sueldoCelia;

    return 0;
}
