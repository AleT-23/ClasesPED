#include <iostream>
int potencia(int base, int exponente);

int main() {
    int base, exponente;

    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;

    std::cout << "El resultado es: " << potencia(base, exponente);
    return 0;
}

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; 
    } else {
        return base * potencia(base, exponente - 1);
    }
}
