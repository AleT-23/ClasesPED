#include <iostream>
#include <string>
#include <vector>

struct Album
{
    std::string nombre;
    int anioLanzamiento;
    int antiguedad;
    std::vector<std::pair<int, std::string>> canciones;
};

struct Cantante
{
    std::string nombre;
    std::string genero;
    std::vector<Album> albums;
};

int calcularAntiguedad(int anioLanzamiento, int anioActual);
Cantante solicitarDatos(int anioActual);
void imprimirDatos(std::vector<Cantante>);
int calcularAntiguedad(int anioLanzamiento)
{
    return 2025 - anioLanzamiento;
}

Cantante solicitarDatos(int anioActual)
{
    Cantante c;

    std::cout << "Ingrese el nombre del cantante: ";
    std::getline(std::cin, c.nombre);

    std::cout << "Ingrese el genero musical: ";
    std::getline(std::cin, c.genero);

    int numAlbums;
    std::cout << "Ingrese la cantidad de albums del cantante: ";
    std::cin >> numAlbums;

    for (int i = 0; i < numAlbums; i++)
    {
        Album a;

        std::cout << "Album " << i + 1 << "\n";
        std::cout << "Nombre del album: ";
        std::getline(std::cin, a.nombre);

        std::cout << "Año de lanzamiento: ";
        std::cin >> a.anioLanzamiento;

        a.antiguedad = calcularAntiguedad(a.anioLanzamiento);

        int numCanciones;
        std::cout << "Cantidad de canciones en el album: ";
        std::cin >> numCanciones;

        for (int j = 0; j < numCanciones; j++)
        {
            std::string titulo;
            std::cout << "Título de la canción " << j + 1 << ": ";
            std::getline(std::cin, titulo);
            a.canciones.push_back({j + 1, titulo});
        }

    }

    return c;
}

void imprimirDatos(std::vector<Cantante> registro)
{
    std::cout << "Datos almacenados \n";
    for (auto c : registro)
    {
        std::cout << "Cantante: " << c.nombre << "\n";
        std::cout << "Genero: " << c.genero << "\n";

        for (auto a : c.albums)
        {
            std::cout << "Album: " << a.nombre << "\n";
            std::cout << "Año de lanzamiento: " << a.anioLanzamiento << "\n";
            std::cout << "Antigüedad: " << a.antiguedad << " años\n";
            std::cout << "Canciones:\n";
        }
    }
}

int main()
{
    std::vector<Cantante> registro;

    int n;
    std::cout << "Ingrese la cantidad de cantantes a registrar: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Registro \n" << i + 1;
        Cantante artista = solicitarDatos(anioActual);
        registro.push_back(artista);
    }

    imprimirDatos(registro);

    return 0;
}
