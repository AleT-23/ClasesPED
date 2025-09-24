#include <iostream>
#include <vector>

struct Datos
{
    int numero;
};
struct Nodo
{
    struct Datos datos;
    struct Nodo *siguiente;
};

struct Nodo *inicio_lista = nullptr;
void InsertarInicio(int n);
void imprimir();
void InsertarFinal(int n);
void Eliminar();
int main(void)
{
    InsertarFinal(89);
    InsertarInicio(40);
    InsertarInicio(80);
    InsertarInicio(100);
    void imprimir();
    void Eliminar();
    /*std:: cout <<"Dir memoria:" << inicio_lista
             <<  "\nNumero: "<<inicio_lista->datos.numero <<"\n";
    std:: cout <<"Dir memoria: " << inicio_lista->siguiente->siguiente
             <<  "\nNumero: "<<inicio_lista->siguiente->siguiente->datos.numero <<"\n";*/

    return 0;
}
void InsertarInicio(int n)
{
    struct Nodo *nuevo_nodo = new Nodo;
    nuevo_nodo->datos.numero = n;
    nuevo_nodo->siguiente = nullptr;

    if (inicio_lista == nullptr)
    {
        inicio_lista = nuevo_nodo;
    }
    else
    {
        nuevo_nodo->siguiente = inicio_lista;
        inicio_lista = nuevo_nodo;
    }

    // siempre va guardadno hacia atras
}
void imprimir()
{
    struct Nodo *temporal = inicio_lista;
    if (inicio_lista != nullptr)
    {
        while (temporal != nullptr)
        {
            std::cout << "Valor de la lista: " << temporal->datos.numero
                      << " | Dirección: " << temporal
                      << "\n";
            temporal = temporal->siguiente;
        }
    }
    else
    {
        std::cout << "La lista está vacía." << std::endl;
    }
}
void InsertarFinal(int n)
{
    struct Nodo *nuevo_nodo = new Nodo;
    struct Nodo *temporal = inicio_lista;
    nuevo_nodo->datos.numero = n;
    nuevo_nodo->datos.numero = n;
    if (inicio_lista = nullptr)
    {
        while (temporal != nullptr)
        {
            temporal = temporal->siguiente;
        }
        temporal->siguiente = nuevo_nodo; // Por que no es necesario apuntar a null
    }
}
void Eliminar()
{
    struct Nodo *temporal = inicio_lista;
    if (inicio_lista != nullptr)
    {
        inicio_lista = temporal->siguiente;
        delete temporal;
        temporal = nullptr;
    }
}
void EliminarFinal()
{
    struct Nodo *temporal = inicio_lista;
    struct Nodo *temporal2 =
    if (temporal.si != nullptr)
    {
        while (temporal.s)
        {
            
        }
    }
} //eliminar terminar