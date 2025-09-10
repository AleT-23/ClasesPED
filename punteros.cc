#include <iostream>

// Paso por valor
int acumulador(int n);

// Paso por referencia
int acumuladorRef(int &n);

// Paso por puntero
int acumuladorPtr(int *n);

int main()
{
    int x = 10;

    std::cout << "Valor inicial de x: " << x << "\n\n";

    // Paso por valor
    std::cout << "[Paso por valor] Nuevo valor: " << acumulador(x) << "\n";
    std::cout << "Valor de x despues: " << x << "\n\n";

    // Paso por referencia
    std::cout << "[Paso por referencia] Nuevo valor: " << acumuladorRef(x) << "\n";
    std::cout << "Valor de x despues: " << x << "\n\n";

    // Paso por puntero
    std::cout << "[Paso por puntero] Nuevo valor: " << acumuladorPtr(&x) << "\n";
    std::cout << "Valor de x despues: " << x << "\n";

    return 0;
}

// Paso por valor: se trabaja con una copia
int acumulador(int n)
{
    return ++n;  // devuelve incrementado, pero NO cambia x en main
}

// Paso por referencia: se trabaja con la variable original
int acumuladorRef(int &n)
{
    return ++n;  // incrementa x directamente
}

// Paso por puntero: se accede a la dirección de memoria
int acumuladorPtr(int *n)
{
    return ++(*n);  // incrementa el valor al que apunta n
}
