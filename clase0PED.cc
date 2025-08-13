#include <iostream>
#include <cmath>
// Declaracion: Solo se coloca de que trtara la funcion. EJ: int muultiplicacion (int x, int y);
//Definicion: De que tratara la funcion previamente declarada.
//Variable Global: Afuera de cualquier funcion que se puede utilizar en cualquier otra operacion
//Variable Local: Consume mas recursos 

const double kPi = 3.1416;
//Declaracion
float CalcularAreaCirculo (float radio);

int main (void)
{
    float radio;
    std :: cout <<"Ingrese el dato de su radio: \n";
    std :: cin >> radio;

    std :: cout <<"El area de su circulo es: " << CalcularAreaCirculo (radio);

    return 0;
}

//Definicion
float CalcularAreaCirculo (float radio)
{
    return round (kPi * (radio * radio));
}
