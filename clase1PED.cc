#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <utility>

struct InformacionCupon
{
    int cant_cupones;
    std::string nombre_persona;
    std::vector<std::pair<std::string, std::string>> cupones_generados; 
   
};

// Declaración
std::string cupones_de_premio(std::string Letras);
std::string AsignarPremio(std::string cupon);
std::string SolicitarDatos();

int main()
{
    srand(time(0));

    InformacionCupon cupon;

    std::cout << "Ingresa el nombre de la persona: ";
    std::cin >> cupon.nombre_persona;

    std::cout << "Ingresa la cantidad de cupones que deseas generar: ";
    std::cin >> cupon.cant_cupones;

    for (int i = 0; i < cupon.cant_cupones; i++)
    {
        std::cout << "\n--- Generando cupon #" << (i+1) << " ---\n";
        std::string letras = SolicitarDatos();
        std::string cupon_generado = cupones_de_premio(letras);
        std::string premio = AsignarPremio(cupon_generado);

        
        cupon.cupones_generados.push_back({cupon_generado, premio});
    }

    std::cout << "\n=== Lista de Cupones de " << cupon.nombre_persona << " ===\n";
    for (int i = 0; i < cupon.cant_cupones; i++)
    {
        std::cout << "Cupon #" << (i+1) << ": " 
                  << cupon.cupones_generados[i].first 
                  << " -> " << cupon.cupones_generados[i].second 
                  << "\n";
    }

    return 0;
}

// Definición
std::string cupones_de_premio(std::string Letras)
{
    int numero_aleatorio = 100 + rand() % 900; 
    return Letras + std::to_string(numero_aleatorio);
}

std::string AsignarPremio(std::string cupon)
{
    std::string numeros = cupon.substr(3, 3); 
    int num = std::stoi(numeros);

    if (num % 2 == 0)
    {
        std::cout << "Es un numero par. Por lo tanto, tiene premio.\n";
        return "Premio";
    }
    else
    {
        std::cout << "Es un numero impar. Por lo tanto, no tiene premio.\n";
        return "Sin premio";
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
