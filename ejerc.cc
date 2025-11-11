#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Luchador
{
    std::string nombre;
    float peso;
};

// Prototipos
Luchador ingresar();
void ordenarPorPeso(std::vector<Luchador> &luchadores);
void imprimirMasPesado(const std::vector<Luchador> &luchadores);
bool CompararPorPeso(const Luchador &a, const Luchador &b);
void BuscarPorNombre(const std::vector<Luchador> &luchadores, const std::string &nombreBuscado);

int main()
{
    std::vector<Luchador> luchadores;
    int n;
    float peso_buscado;
    std::cout << "¿Cuántos luchadores deseas ingresar? ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        Luchador peleador = ingresar();
        luchadores.push_back(peleador);
    }

    ordenarPorPeso(luchadores);
    imprimirMasPesado(luchadores);

    // ---- BÚSQUEDA BINARIA POR PESO ----
    std::cout << "\nIngrese el peso a buscar en lbs: ";
    std::cin >> peso_buscado;

    // Primero ordenamos de menor a mayor (para binary_search)
    std::sort(luchadores.begin(), luchadores.end(), CompararPorPeso);

    // Buscamos con find_if en lugar de binary_search para obtener el objeto encontrado
    auto it = std::find_if(luchadores.begin(), luchadores.end(),
                           [peso_buscado](const Luchador &l)
                           {
                               return l.peso == peso_buscado;
                           });

    if (it != luchadores.end())
    {
        std::cout << "Luchador encontrado: " << it->nombre
                  << " - Peso: " << it->peso << " lbs\n";
    }
    else
    {
        std::cout << "No se encontró ningún luchador con ese peso.\n";
    }

    // ---- BÚSQUEDA POR NOMBRE ----
    std::string nombreBuscado;
    std::cout << "\nIngrese el nombre a buscar: ";
    std::cin >> nombreBuscado;
    BuscarPorNombre(luchadores, nombreBuscado);

    return 0;
}

// ---- FUNCIONES ----

Luchador ingresar()
{
    Luchador peleador;
    std::cout << "\nNombre del luchador: ";
    std::cin >> peleador.nombre;
    std::cout << "Peso en libras: ";
    std::cin >> peleador.peso;
    return peleador;
}

bool CompararPorPeso(const Luchador &a, const Luchador &b)
{
    return a.peso < b.peso; // Para orden ascendente
}

void ordenarPorPeso(std::vector<Luchador> &luchadores)
{
    std::sort(luchadores.begin(), luchadores.end(),
              [](const Luchador &a, const Luchador &b)
              {
                  return a.peso > b.peso; // Orden descendente
              });
}

void imprimirMasPesado(const std::vector<Luchador> &luchadores)
{
    if (!luchadores.empty())
    {
        const Luchador &masPesado = luchadores[0];
        std::cout << "\nEl luchador más pesado es: " << masPesado.nombre
                  << " con " << masPesado.peso << " lbs\n";
    }
    else
    {
        std::cout << "No hay luchadores registrados.\n";
    }
}

// ---- NUEVA FUNCIÓN: búsqueda lineal por nombre ----
void BuscarPorNombre(const std::vector<Luchador> &luchadores, const std::string &nombreBuscado)
{
    auto it = std::find_if(luchadores.begin(), luchadores.end(),
                           [nombreBuscado](const Luchador &l)
                           {
                               return l.nombre == nombreBuscado;
                           });

    if (it != luchadores.end())
        std::cout << "Luchador encontrado: " << it->nombre
                  << " - Peso: " << it->peso << " lbs\n";
    else
        std::cout << "No se encontró un luchador con ese nombre.\n";
}
