#include <iostream>
#include <set>
#include <string>

struct Tiobe {
    std::string lenguaje_programacion;
    float puntaje;
};
struct CompTiobe {
    bool operator()(const Tiobe& a, const Tiobe& b) const {
        return a.puntaje < b.puntaje;
    }
};

Tiobe SolicitarDatos() {
    Tiobe info_datos;
    std::cout << "Ingrese el tipo de lenguaje de programación: ";
    std::cin >> info_datos.lenguaje_programacion;
    std::cout << "Ingrese el puntaje del lenguaje de programación: ";
    std::cin >> info_datos.puntaje;
    return info_datos;
}

void Imprimir(const std::set<Tiobe,CompTiobe>& abb) {
    std::cout << "Lenguajes registrados: \n";
    for (auto elemento : abb) {
        std::cout << "Lenguaje: " << elemento.lenguaje_programacion << "|| Puntaje: " << elemento.puntaje << "\n";
    }
}

void BuscarLenguaje(const std::set<Tiobe,CompTiobe>& abb, std:: string len)
{
    Tiobe temp;
    auto it = abb.find(temp);
    if (it != abb.end()) {
        std::cout << "Encontrado:\n";
        std::cout << "Nombre: " << it->lenguaje_programacion << "\n";
        std::cout << "Puntaje: " << it->puntaje << "\n";
    }
    else if (it != abb.empty())
    {
        /* code */
    }
    
};

int main() {
    std::set<Tiobe, CompTiobe> abb;
    int n;
    char continuar;
    switch (n);
    do {
        Tiobe informacion = SolicitarDatos();
        abb.insert(informacion);

        std::cout << "¿Desea ingresar otro lenguaje? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    Imprimir(abb);

    return 0;
}