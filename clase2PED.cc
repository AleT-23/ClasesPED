
#include <iostream>
#include <string>
#include <vector>



struct Album
{
    string nombre;
    int anioLanzamiento;
    int antiguedad;
    vector<Cancion> canciones;
};

struct Cantante
{
    string nombre;
    string genero;
    Album album;
};

//declaracion
int calcularAntiguedad(int anio);
void solicitarDatos(Cantante);
void ImprimirDatos();

int main (void)
{

    return 0;
}



int calcularAntiguedad(int anio)
{
    int anio_Actual = c.album.anioLanzamiento - 2025;
    return anio_Actual;
}

void solicitarDatos(Cantante)
{
    std::cout << "Ingrese el nombre del cantante: ";
    getline(cin, c.nombre);

    std::cout << "Ingrese el genero musical: ";
    getline(cin, c.genero);

    std::cout << "Ingrese el nombre del album: ";
    getline(cin, c.album.nombre);

    std::cout << "Ingrese el anio de lanzamiento del album: ";
    std::cin >> c.album.anioLanzamiento;

    c.album.antiguedad = calcularAntiguedad(c.album.anioLanzamiento);

    int n;
    std::cout << "Ingrese el numero de canciones: ";
    std::cin >> n;

}
void ImprimirDatos(Cantante)
{
    std::cout <<"Datos de los albumnes y artistas que has ingresado.\n";
    std::cout <<"Cantante: " << c.nombre <<"\n";
    std::cout <<"Genero: " << c.genero <<"\n";
    std::cout <<"Album: " << c.album.nombre <<"\n";
    std::cout <<"Antiguedad del album: " <<c.album.anioLanzamiento <<"\n";



}


