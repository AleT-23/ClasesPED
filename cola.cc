#include <iostream>
#include <queue>
#include <chrono>
#include <thread>

struct Persona
{
    std::string nombre;
    int f_dia;
    int f_mes;
    int f_anio;
};


void Insertar(std::queue<Persona> &cola, Persona p);
void Eliminar(std::queue<Persona> &cola);
void Imprimir(std::queue<Persona> &cola);

int main (int argc, char *argv[])
{
    struct Persona p;
    std:: queue<struct Persona> cola;
    char continuar;
    do
    {
        std::cout << "Ingresa un nombre: ";
        std::cin >> p.nombre;
        std::cout << "Ingrese el dia de la fecha del nacimiento:\n";
        std::cin >> p.f_dia;
        std::cout <<"Ingrese el mes de la fecha del nacimiento:\n";
        std::cin >> p.f_mes;
        std::cout <<"Ingrese el año de la fecha del nacimiento:\n";
        std::cin >> p.f_anio;
        cola.push(p);

        std::cout << "¿Deseas continuar agregando personas a la cola? (s para seguir/n para parar): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    std::cout << "\n---------------\n";
    Imprimir(cola);

    std::cout << "\n---------------\n";

    return 0;
}

void Eliminar(std::queue<Persona> &cola)
{
    if (!cola.empty())
    {
        cola.pop(); // elimina primer elemento de la cola
    }
    else
    {
        std::cout << "La cola está vacía.\n";
    }
}
void Imprimir(std::queue<Persona> &cola)
{
    if (cola.empty())
    {
        std::cout << "La cola está vacía.\n";
        return;
    }
    while (!cola.empty())
    {
        std::cout << "Tamaño actual de la cola: " << cola.size() << "\n";
        Persona frente = cola.front();
        std::cout << "Frente: \n Nombre:" << frente.nombre << "\nFecha" << frente.f_dia << " / " << frente.f_mes << " / " << frente.f_anio << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(3000));
        cola.pop();
    }
    std:: cout <<"Se han mostrado todos las personas de la cola.\n";
}