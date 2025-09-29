#include <iostream>
using namespace std;

void insertarInicio(struct Nodo **lista, int n);

struct Datos {
    int numero;
};

struct Nodo {
    struct Datos datos;
    struct Nodo *siguiente;
    struct Nodo *anterior;
};

int main() {
    struct Nodo *lista = nullptr;

    insertarInicio(&lista, 100);
    insertarInicio(&lista, 7);
    insertarInicio(&lista, 17);

    cout << "Dir memoria: " << lista
         << "  Dir. memoria siguiente: " << lista->siguiente 
         << "  Valor: " << lista->datos.numero << "\n";

    cout << "Dir memoria: " << lista->siguiente->siguiente
         << "  Dir. memoria siguiente: " << lista->siguiente->siguiente->siguiente
         << "  Valor: " << lista->siguiente->siguiente->datos.numero << "\n";

    return 0;
}

void insertarInicio(struct Nodo **lista, int n) {
    struct Nodo *nuevoNodo = new Nodo;
    nuevoNodo->datos.numero = n;
    nuevoNodo->siguiente = nullptr;
    nuevoNodo->anterior = nullptr;

    if (*lista == nullptr) {
        *lista = nuevoNodo;  
    } else {
        nuevoNodo->siguiente = *lista;
        (*lista)->anterior = nuevoNodo;
        *lista = nuevoNodo;
    }
}
//inserta final
//insertar intermedio segu n posicion y segun valor // // auxiliar usando anterior siguiente 
