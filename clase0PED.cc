#include <iostream>
#include <cmath>
// Declaracion: Solo se coloca de que trtara la funcion. EJ: int muultiplicacion (int x, int y);
// Definicion: De que tratara la funcion previamente declarada.
// Variable Global: Afuera de cualquier funcion que se puede utilizar en cualquier otra operacion
// Variable Local: Consume mas recursos
// Usa roundf cuando quieras redondear como en matemáticas normales.
// Usa floorf si quieres siempre ir al piso.
// Usa ceilf si quieres siempre ir al techo.

const double kPi = 3.1416;
// Declaración
float CalcularAreaCirculo(float radio, int CantidadDeDecimales);

int main(void)
{
    float radio;
    int decimales;

    std::cout << "Ingrese el dato de su radio: \n";
    std::cin >> radio;

    std::cout << "Ingrese la cantidad de decimales que desea (1, 2 o 3): \n";
    std::cin >> decimales;

    float area = CalcularAreaCirculo(radio, decimales);

    std::cout << "El area de su circulo es: " << area << "\n";

    return 0;
}

// Definición
float CalcularAreaCirculo(float radio, int CantidadDeDecimales)
{
    float area = kPi * (radio * radio);
    float factor = pow(10, CantidadDeDecimales); 

    float Redondeo = roundf(area * factor) / factor;

    return Redondeo;
}