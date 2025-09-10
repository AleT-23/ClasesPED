#include <iostream>
#include <string>

// Paso por valor
std::string saludo(std::string saludo);

// Paso por referencia
std::string saludoRef(std::string &saludo);

// Paso por puntero
std::string saludoPtr(std::string *saludo);

int main(void)
{
    std::string saludo = "Hola";

    std::cout << "Saludo inicial: " << Saludo << "\n";

    // Paso por valor
    std::cout << "Nuevo saludo: " << saludo(Saludo) << "\n";
    std::cout << "Valor de saludo despues: " << Saludo << "\n";

    // Paso por referencia
    std::cout << "Nuevo saludo: " << saludoRef(Saludo) << "\n";
    std::cout << "Valor de saludo despues: " << Saludo << "\n";

    // Paso por puntero
    std::cout << "Nuevo saludo: " << saludoPtr(&Saludo) << "\n";
    std::cout << "Valor de saludo despues: " << Saludo << "\n";

    return 0;
}

std::string saludoRef(std::string saludo)
{
    saludo = "Hello";  
    return saludo;
}
std::string saludoRef(std::string &saludo)
{
    saludo = "Hi"; 
    return saludo;
}

std::string saludoPtr(std::string *saludo)
{
    *saludo = "Adios";  
    return *saludo;
}
