#include <iostream>
#include <vector>
#include <string>

int main(void)
{
    int cantidadVentas;
    float precio;
    float suma = 0;
    float *ptr = new float[cantidadVentas];
    std::cout << "Ingrese la cantidad de productos que desea ingresar: \n";
    std::cin >> cantidadVentas;
    for (int i = 0; i < cantidadVentas; i++)
    {
        std::cout << "Ingrese el prodructo #" << i + 1 << "\n";
        std::cin >> *(ptr + 1);
        suma += *(ptr);
    }

    for (int i = 0; i < cantidadVentas; i++)
    {
        std::cout << "Dir.Memoria " << ptr + i 
        << ", venta " << i + 1 << " $"
        << *(ptr +1);
    }
    std::cout <<"Suma de todos los productos: " 
    std:: cout <<"Dir.memoria: " << &ptr;
    std:: cout 

    return 0;
}
