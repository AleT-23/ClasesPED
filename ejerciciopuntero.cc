#include <iostream>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int suma1 = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Valor del elemento #" << i + 1 << "=" << arr[i];
        std::cout << "Direccion = " << &arr[i] << "\n";
        suma1 += arr[i];
    }
    std::cout << "Suma de indices: " << suma1 << "\n";

    int *p = arr;
    int suma2 = 0;
    int contador = 0;

    while (contador < 5)
    {
        std::cout << "Elemento = " << *p;
        std::cout << "Direccion = " << p << "\n";
        suma2 += *p;
        (p+1);
        contador++;
    }
    std::cout << "Suma con punteros: " << suma2 << "\n";

    return 0;
}
