#include <iostream>
#include <string>
#include <vector>
#include <utility>
 
 
struct InformacionCupon{
    int cant_cupones;
    std::string nombre_persona;
    std::vector<std::pair<std::string, std::string>> cupon_premio;
}cupon;
 
//  Vector global de tipo struct
std::vector<struct InformacionCupon> vector_cupones;

struct  InformacionCupon SolicitarDatosInformacion();
std::string SolicitarDatos();
std::string GenerarCupon(std::string prefijo);
std::string AsignarPremio(std::string identificador_cupon);
 
int main()
{
    srand(time(0));
    struct InformacionCupon cupon;
    vector_cupones.push_back(cupon);
    // Solicitar la cant de cupones a generar
    std::cout<<"Ingresa el nombre de la persona";
    std::cin>>cupon.nombre_persona;
    std::cout<<"Ingresa la cantidad de cupones a generar: ";
    std::cin>>cupon.cant_cupones;
 
 
    for (int i = 0; i < cupon.cant_cupones; i++)
    {
        std::string cupon_generado = GenerarCupon(SolicitarDatos());
        std::string premio = AsignarPremio(cupon_generado);
        cupon.cupon_premio.push_back({cupon_generado, premio});
       
    }
 
    // Almanenando el struct en el vector
    inf_cupones.push_back(cupon);
 
    //  Imprimir desde el struct
    std::cout<<"Imprimiendo informacion de cupones generados \n";
    std::cout<<"Cantidad de cupones: " << cupon.cant_cupones <<"\n";
    std::cout<<"Nombre de la persona: " << cupon.nombre_persona <<"\n";
    for (auto cupon: cupon.cupon_premio)
    {
       std::cout<< "Cupon: " <<cupon.first  <<" - Premio: " << cupon.second  <<"\n";
    }
   
 
 
    return 0;
}
 
std::string SolicitarDatos()
{
 
    std::string prefijo;
 
    do
    {
        // Solicitar el prefijo
        std::cout << "Ingresa el prefijo del cupon (3 letras maximo): ";
        std::cin >> prefijo;
 
        // Validar la longitud igual 3
        if (prefijo.length() == 3)
        {
            return prefijo;
        }
        else
        {
            std::cout << "Error. El prefijo debe ser de 3 letras.\n";
        }
    } while (true);
}
 
std::string GenerarCupon(std::string prefijo)
{
    // generar el valor aleatorio
    int numero_aleatorio = rand() % 100 + 999;
    std::string conversion = std::to_string(numero_aleatorio);
    return prefijo + conversion;
}
 
std::string AsignarPremio(std::string identificador_cupon)
{
    std::string mensaje;
    // Extraer el valor numerico del identificador
    // AGO1090   1090
    identificador_cupon = identificador_cupon.substr(3, 4);
 
    // Convertir a entero
    int conversion_entero = std::stoi(identificador_cupon);
 
    // Evaluar si es o no par
    if (conversion_entero % 2 == 0)
    {
        mensaje = "Tiene premio";
    }
    else
    {
        mensaje = "No tiene premio";
    }
 
    return mensaje;
}

struct  InformacionCupon SolicitarDatosInformacion()
{
    struct InformacionCupon cupon;
    {
        /* data */
    };
    
    std::cout << "Ingresa el nombre de la persona: ";
    std::cin >> cupon.nombre_persona;

    std::cout << "Ingresa la cantidad de cupones que deseas generar: ";
    std::cin >> cupon.cant_cupones;

    for (int i = 0; i < cupon.cant_cupones; i++)
    {
        std::cout << "\n--- Generando cupon #" << (i+1) << " ---\n";
        std::string letras = SolicitarDatos();
        std::string cupon_generado = cupones_de_premio(letras);
        std::string premio = AsignarPremio(cupon_generado);

        
        cupon.cupones_generados.push_back({cupon_generado, premio});
    }
    return cupon;
}
