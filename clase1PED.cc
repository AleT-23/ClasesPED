#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// Declaración
std::string cupones_de_premio(std::string Letras);
void AsignarPremio(std::string cupon);
std::string SolicitarDatos();

int main()
{
    srand(time(0));
    int cantidad;

    std::cout << "Ingresa la cantidad de cupones que deseas generar\n";
    std::cin >> cantidad;
    std::string cupones[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        std::string letras = SolicitarDatos();
        std::string cupon = cupones_de_premio(letras);
        std::cout << "Su cupon generado es: " << cupon << "\n";
        cupones[i] = cupon;  
        AsignarPremio(cupon);
    }
    for (int i = 0; i < cantidad; i++)
    {
        std::cout << "Cupon #" << i+1 << ": " << cupones[i] << "\n";
    }
}

// Definición
std::string cupones_de_premio(std::string Letras)
{
    int numero_aleatorio = 100 + rand() % 999;
    return Letras + std::to_string(numero_aleatorio);
}

void AsignarPremio(std::string cupon)
{
    std::string numeros = cupon.substr(3, 4);
    int num = std::stoi(numeros);

    if (num % 2 == 0)
    {
        std::cout << "Es un numero par. Por lo tanto, tiene premio.\n";
    }
    else
    {
        std::cout << "Es un numero impar. Por lo tanto, no tiene premio.\n";
    }
}

std::string SolicitarDatos()
{
    std::string prefijo;
    do
    {
        std::cout << "Ingrese las 3 letras para su cupon: ";
        std::cin >> prefijo;

        if (prefijo.length() != 3)
        {
            std::cout << "Recuerde que deben ser exactamente 3 caracteres. Vuelva a intentarlo.\n";
        }

    } while (prefijo.length() != 3);

    return prefijo;
}
