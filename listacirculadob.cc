#include <iostream>
struct Datos
{
    int numero;
};

struct Nodo
{
    struct Datos datos;
    struct Nodo *siguiente;
    struct Nodo *anterior;
};

struct Nodo *lista = nullptr;

// Declaración de funciones
void InsertarInicio(struct Nodo *&lista, int n);
void Imprimir();
void EliminarInicio();

int main(int argc, char *argv[])
{
    struct Nodo *lista = nullptr;
    InsertarInicio(lista,1);
    InsertarInicio(lista,129);
    Imprimir();

    return 0;
}

// Insertar nodo al inicio de la lista
void InsertarInicio(Nodo*& lista, int n) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->datos.numero = n;
    if (lista == nullptr) {
        nuevoNodo->siguiente = nuevoNodo;
        nuevoNodo->anterior = nuevoNodo;
        lista = nuevoNodo;
    } else {
        Nodo* ultimo = lista->anterior;
        nuevoNodo->siguiente = lista;
        nuevoNodo->anterior = ultimo;
        lista->anterior = nuevoNodo;
        ultimo->siguiente = nuevoNodo;
        lista = nuevoNodo;
    }
}
void EliminarInicio()
{
    struct Nodo *temporal = lista;
    if (lista == nullptr)
    {
        std::cout << "Lista vacía" << std::endl;
        return;
    }
    if (lista->siguiente == lista) {
        delete lista;
        lista = nullptr;
    }
}
void Imprimir()
{
    struct Nodo *temporal = lista;
    if (lista != nullptr)
    {
       while (temporal != nullptr)
       {
            std::cout << "Lista " << temporal->datos.numero << " Direccion " 
            << temporal->siguiente << " dir nodo siguiente " << temporal->siguiente << temporal->anterior << std::endl;
            temporal = temporal->siguiente;
       }
    }
    else
    {
        std::cout << "Lista vacia";
    }
}