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
bool CompararPorPeso(const Luchador &a, const Luchador &b);
void BuscarPorNombre(std::vector<Luchador>, std:: string );
int main() {
    std::vector<Luchador> luchadores;
    int n;
    float peso_buscado;
    std::cout << "¿Cuántos luchadores deseas ingresar? ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Luchador peleador = ingresar();
        luchadores.push_back(peleador);
    }
    ordenarPorPeso(luchadores);
    imprimirMasPesado(luchadores);
    std::cout << "Ingrese el peso a buscar en lbs: ";
    std::cin >> peso_buscado;
    std::sort(luchadores.begin(), luchadores.end(), CompararPorPeso);
    bool encontrado = std::binary_search(luchadores.begin(),luchadores.end(),Luchador{"", peso_buscado},CompararPorPeso);
    if (encontrado)
        std::cout << "Se encontró un luchador con ese peso.\n";
    else
        std::cout << "No se encontró ningún luchador con ese peso.\n";
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
bool CompararPorPeso(const Luchador &a, const Luchador &b) {
    return a.peso < b.peso;
}
void ordenarPorPeso(std::vector<Luchador> &luchadores) {
    std::sort(luchadores.begin(), luchadores.end(), [](const Luchador &a, const Luchador &b) {
        return a.peso > b.peso;
    });
}
void imprimirMasPesado(const std::vector<Luchador> &luchadores) {
    if (!luchadores.empty()) {
        const Luchador &masPesado = luchadores[0];
        std::cout << "El luchador más pesado es: " << masPesado.nombre << " con " << masPesado.peso << " lbs\n";
    } else {
        std::cout << "No hay luchadores registrados.\n";
    }
}

if ( != Luchador.end())
{
    std:: cout <<"Luchador encontrado:" << it-> nombre << "Peso del luchador buscado: "<<  it.peso <<"\n";
}
else
{
    std:: cout <<"Luchador no encontrado\n";
}
