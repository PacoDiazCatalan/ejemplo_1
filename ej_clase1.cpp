#include <iostream>

using namespace std;

class Caja
{
    public: 
        double ancho;
        double largo;
        double alto;
};

int main()
{
    Caja Caja1;
    Caja Caja2;

    double volumen = 0.0;   // Guarda el volumen (de una caja)

    // Caja 1. Especificación
    Caja1.alto = 5.0;
    Caja1.ancho = 7.0;
    Caja1.largo = 6.0;

    // Caja 2. Dimensiones
    Caja2.alto = 10.0;
    Caja2.largo = 12.0;
    Caja2.ancho = 13.0;

    // Volumen de la primera caja
    volumen = Caja1.alto * Caja1.largo * Caja1.ancho;

    cout << "Volumen de la caja 1: " << volumen << endl;

    volumen = Caja2.alto * Caja2.largo * Caja2.ancho;

    cout << "Volumen de la caja 2: " << volumen << endl;

    return 0;
}

