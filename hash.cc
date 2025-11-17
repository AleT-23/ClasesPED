#include <iostream>
#include <string>
#include <unordered_map>

struct Animal
{
    std::string Nombre_Cientifico;
    std::string Nombre_Comun;
    std::string Genero;
};
Animal SolicitarDatos();
void Buscar(const std::unordered_map<std::string, Animal> &umap);
void Imprimir(const std::unordered_map<std::string, Animal> &umap);
int main(void)
{
    std::unordered_map<std::string, Animal> umap;
    Animal info_animal;
    char continuar;
    do
    {
        info_animal = SolicitarDatos();
        // umap.insert({info_animal.Nombre_Cientifico,info_animal});//
        umap.emplace(info_animal.Nombre_Cientifico, info_animal);
        std::cout << "Desea continuar agregando animales? (s/n):";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
    Imprimir(umap);

    char opc;
    std::cout << "\n¿Desea buscar un animal? (s/n): ";
    std::cin >> opc;

    if (opc == 's' || opc == 'S')
    {
        Buscar(umap);
    }

    return 0;
}
Animal SolicitarDatos()
{
    Animal a;
    std::cout << "Ingrese el nombre cientifico del animal\n";
    std::cin >> a.Nombre_Cientifico;
    std::cout << "Ingrese el nombre comun del animal \n";
    std::cin >> a.Nombre_Comun;
    std::cout << "Ingrese el genero del animal\n";
    std::cin >> a.Genero;
    return a;
}
void Imprimir(const std::unordered_map<std::string, Animal> &umap)
{
    auto hash = umap.hash_function();
    std::cout << "Animales registrados: \n";
    for (auto i : umap)
    {
        std::cout << "\nClave: \n"
                  << hash(i.first) << "\nNombre cientifico del animal:\n"
                  << i.first << "\nNombre comun del animal:\n"
                  << i.second.Nombre_Comun << "\nGenero del animal:\n"
                  << i.second.Genero << "\n";
    }
}
void Buscar(const std::unordered_map<std::string, Animal> &umap)
{
    std::string clave;
    std::cout << "Ingrese la clave del animal al que se esta buscando\n";
    std::cin >> clave;
    auto it = umap.find(clave);
    if (umap.empty())
    {
        std:: cout <<"La lista se encuentra vacia \n";
    }
    else if (it != umap.end())
    {
        std::cout << "\nAnimal encontrado:\n";
        std::cout << "Nombre científico: " << it->first << "\n";
        std::cout << "Nombre común: " << it->second.Nombre_Comun << "\n";
        std::cout << "Genero: " << it->second.Genero << "\n";
    }
    else
    {
        std::cout << "\nEl animal con nombre científico " << clave << " no se encuentra registrado.\n";
    }
};
void Eliminar(const std::unordered_map<std::string, Animal> &umap)
{
    std::string clave;
    std::cout << "Ingrese la clave del animal al que se esta buscando\n";
    std::cin >> clave;
    auto it = umap.find(clave);
    if (umap.empty())
    {
        std:: cout <<"La lista se encuentra vacia \n";
    }
    else if (it != umap.end())
    {
        auto it = umap.erase(clave);
    }
    else
    {
        std::cout << "\nEl animal con nombre científico " << clave << " no se encuentra registrado.\n";
    }
};