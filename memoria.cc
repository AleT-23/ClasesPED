
/*int main (void)
{   
    //Reseva dinaminca para tipo int
    int *ptr = new int; //busca en el Heap, pero ptr siempre se mantiende dentro del stack 
    *ptr = 10;
    delete ptr;
    ptr = nullptr; //se libera el espacio de memoria 

    return 0;
}
*/
#include <iostream> 

using namespace std;
int main ()
{
    int *ptr = new int;
    *ptr = 100;

    //Validacion de asignacion de memoria
    if (ptr == nullptr)
    {
        std:: cout <<"Error de asignacion de memoria\n"; // ya que no se encontro espacio para dicho elemento 
    }
    else
    {
        std:: cout <<"Dir.memoria" << ptr <<"\n";
    }
    
    delete ptr;
    ptr = nullptr;
    
    if (ptr == nullptr)
    {
        std:: cout <<"Error de asignacion de memoria\n"; // ya que no se encontro espacio para dicho elemento 
    }
    else
    {
        std:: cout <<"Dir.memoria" << ptr <<"\n";
    }

    return 0;
}