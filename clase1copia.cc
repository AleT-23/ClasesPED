#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <ctime>

struct InformacionPersona
{
    std::string nombre_persona;
};


struct InformacionCupon {
    int cant_cupones;
    std::vector<std::pair<std::string, std::string>> cupon_premio;
    struct InformacionPersona inf_persona;
} cupon;


std::vector<struct InformacionCupon> inf_cupones;

// Prototipos
std::string SolicitarDatos();
std::string GenerarCupon(std::string prefijo);
std::string AsignarPremio(std::string identificador_cupon);
void Imprimir(std::vector<struct InformacionCupon> vector_cupones);

int main() {
    srand(time(0));
    int seguir;

    // Solicitar la cant de cupones a generar
    do
    {
        std::cout << "Ingresa el nombre de la persona: ";
        std::cin >> cupon.inf_persona.nombre_persona;
        std::cout << "Ingresa la cantidad de cupones a generar: ";
        std::cin >> cupon.cant_cupones;

        for (int i = 0; i < cupon.cant_cupones; i++) {
        std::string cupon_generado = GenerarCupon(SolicitarDatos());
        std::string premio = AsignarPremio(cupon_generado);
        cupon.cupon_premio.push_back({cupon_generado, premio});

    }

    // Almacenando el struct en el vector
    inf_cupones.push_back(cupon);

    Imprimir(inf_cupones);
    std:: cout<<"¿Deseas seguir? (Ingrese 0 si desea seguir, ingrese 1 si desea parar) \n";
    std:: cin>> seguir;

    } while (seguir != 1);
    
    return 0;
}

std::string SolicitarDatos() {
    std::string prefijo;
    do {
        std::cout << "Ingresa el prefijo del cupon (3 letras maximo): ";
        std::cin >> prefijo;

        if (prefijo.length() == 3) {
            return prefijo;
        } else {
            std::cout << "Error. El prefijo debe ser de 3 letras.\n";
        }
    } while (true);
}

std::string GenerarCupon(std::string prefijo) {
    // generar el valor aleatorio de 3 dígitos
    int numero_aleatorio = rand() % 900 + 100; 
    std::string conversion = std::to_string(numero_aleatorio);
    return prefijo + conversion;
}

std::string AsignarPremio(std::string identificador_cupon) {
    std::string mensaje;
    // Extraer el valor numerico del identificador
    std::string parte_numerica = identificador_cupon.substr(3);

    int conversion_entero = std::stoi(parte_numerica);

    if (conversion_entero % 2 == 0) {
        mensaje = "Tiene premio";
    } else {
        mensaje = "No tiene premio";
    }
    return mensaje;
}

void Imprimir(std::vector<struct InformacionCupon> vector_cupones) {
    std::cout << "Imprimiendo registros de cupones\n";
    for (auto c : vector_cupones) {
        std::cout << "Nombre de la persona: " << c.inf_persona.nombre_persona << "\n";
        std::cout << "Cantidad de cupones: " << c.cant_cupones << "\n";
        for (auto c_p : c.cupon_premio) {
            std::cout << "Cupon: " << c_p.first << " - Premio: " << c_p.second << "\n";
        }
    }
}
