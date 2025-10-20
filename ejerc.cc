#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

struct Luchador {
    std::string nombre;
    float peso;
};

Luchador ingresar();
void ordenarPorPeso(std::vector<Luchador> &luchadores);
void imprimirMasPesado(const std::vector<Luchador> &luchadores);

int main() {
    std::vector<Luchador> luchadores;
    int n;

    std::cout << "¿Cuántos luchadores deseas ingresar? ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        Luchador peleador = ingresar();  
        luchadores.push_back(peleador); 
    }

    std::sort(luchadores.begin(), luchadores.end(),[](const Luchador &a, const Luchador &b)
    {
        return a.peso > b.peso;
    });
    for (auto peleador : luchadores)
    {
        /* code */
    }
    std::binary_search(luchadores.begin(), luchadores.end(),[](const Luchador &a, const Luchador &b)
    {

    });

    return 0;
}

Luchador ingresar() {
    Luchador peleador;
    std::cout << "Nombre del luchador: ";
    std::cin >> peleador.nombre;
    std::cout << "Peso en libras: ";
    std::cin >> peleador.peso;
    return peleador;  
}

void ordenarPorPeso(std::vector<Luchador> &luchadores) {
    std::sort(luchadores.begin(), luchadores.end() + luchadores.size());
    std::binary_search(luchadores.begin(), luchadores.end() + luchadores.size(), 100);
}
void imprimirMasPesado(const std::vector<Luchador> &luchadores) {
    if (!luchadores.empty()) {
        const Luchador &masPesado = luchadores[0];
        std::cout << "El luchador más pesado es: " << masPesado.nombre << " con " << masPesado.peso << " lbs\n";
    } else {
        std::cout << "No hay luchadores registrados.\n";
    }
}