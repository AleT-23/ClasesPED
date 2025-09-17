#include <iostream>
#include <string>
struct Persona
{
    std::string nombre;
    float altura;
    float peso;
    //indice de masa corporal
    float IMC;
}*ptr_persona; //VARIABLE GLOBAL DE TIPO STRUCT
void xalcularIMC(Persona *ptr);
Persona datosPersona();
int main (void)
{

    Persona persona = datosPersona();

    xalcularIMC(&persona);

    std::cout << "Datos de la persona :\n";
    std::cout << "Nombre: " << persona.nombre << "\n";
    std::cout << "Altura: " << persona.altura << " m\n";
    std::cout << "Peso: " << persona.peso << " kg\n";
    std::cout << "IMC: " << persona.IMC << "\n";
    return 0;

}
Persona datosPersona()
{
    Persona p;
    std::cout << "Ingrese el nombre: ";
    std::cin >> p.nombre;
    std::cout << "Ingrese la altura (m): ";
    std::cin >> p.altura;
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> p.peso;

    return p;
}

void xalcularIMC(Persona *ptr)
{
    ptr->IMC = ptr->peso / (ptr->altura * ptr->altura); 
}
// -> para acceder a miembros de la struct

// Crear una funcion de tipo strut que solicite datos 
// Crear una funcion tipo void que calcule el imc Y GUARDAR EN EL CAMPO IMC DE LA STRUCT 
// Aceptar como parametro un puntero 
// IMC = PESO / (ALTURA * ALTURA) peso en kg y altura en metros 
