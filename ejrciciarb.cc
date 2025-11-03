#include <iostream>
struct Tiobe
{
    std:: string lenguaje_programacion;
    float puntaje;
};
struct Nodo
{
    struct Tiobe indice_tiobe;
    struct Nodo *izquierdo;
    struct Nodo *derecho;
};
Nodo *crear_nodo(const Tiobe &indice);
void insertar_nodo(Nodo *&abb, const Tiobe &indice);
Tiobe SolicitarDatos();
void recorrido_inorden(Nodo *abb);

int main ()
{
    struct Nodo *abb = nullptr;
    struct Tiobe informacion = SolicitarDatos();
    crear_nodo(informacion);
    insertar_nodo(abb, informacion);
    recorrido_inorden(abb);
    return 0;
}
Tiobe SolicitarDatos()
{
    struct Tiobe info_datos;    
    std:: cout <<"Ingrese el tipo de lenguaje de programacion\n";
    std:: cin >> info_datos.lenguaje_programacion;
    std:: cout <<"Ingrese el puntahe del lenguaje de programacion \n";
    std:: cin >> info_datos.puntaje;
    return info_datos;
}
Nodo *crear_nodo(const Tiobe &indice)
{
    Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->indice_tiobe = indice;
    nuevo_nodo->izquierdo = nullptr;
    nuevo_nodo->derecho = nullptr;
    return nuevo_nodo;
}
void insertar_nodo(Nodo *&abb, const Tiobe &indice)
{
    if (abb == nullptr)
    {
        abb = crear_nodo(indice);
        return;
    }

    if (indice.puntaje < abb->indice_tiobe.puntaje)
        insertar_nodo(abb->izquierdo, indice);
    else
        insertar_nodo(abb->derecho, indice);
}
void recorrido_inorden(Nodo *abb)
{
    // Si el arbol es nulo
    if (!abb)
        return;
    // Si no es nulo
    recorrido_inorden(abb->izquierdo);
    std::cout << "[" << abb->indice_tiobe.puntaje << " : " << abb->indice_tiobe.lenguaje_programacion << "] ";
    recorrido_inorden(abb->derecho);
}
