#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>    

// Declaración
std::string cupones_de_premio(std::string Letras);
void AsignarPremio (std:: string identificador_cupon);

int main() 
{
    srand(time(0));

    std::string letras;
    std::cout << "Ingrese las letras para su cupon: \n";
    std::cin >> letras;

    std::string cupon = cupones_de_premio(letras);

    std::cout << "Su cupon generado es: " << cupon << "\n";
    return 0;
}

// Definición
std::string cupones_de_premio(std::string Letras) 
{

    int numero_aleatorio = 100 + rand() % 900;
    return Letras + std::to_string(numero_aleatorio);
}

void AsignarPremio (std:: string cupon)
{
    identificador_cupon = identificador_cupon.substr(3,4);
    
    int num = std::stoi(identificador_cupon);

    if (num % 2 == 0)
    {
        std::cout <<"Es un numero entero par. Por lo tanto tiene premio. \n";
    }
    else
    {
        std::cout <<"Es un numero entero impar. Por lo tanto no tiene premio.\n";
    }
    
    
}