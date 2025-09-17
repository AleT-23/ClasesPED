#include <iostream>

int main()
{
    int arreglo[3] = {1,3,100};
    int *prt = arreglo; //posicion de memoria 

    std:: cout <<"Peso de bytes" <<sizeof(int);
    std:: cout <<" Dir. memoria: " << &arreglo;
    std:: cout <<"Valor poricion 0" << arreglo[0]  <<"\n"; //atraves de indices 
    std:: cout <<" Dir. memoria: " << (arreglo +1); 
    std:: cout <<"Valor pos[1]" <<*(arreglo + 1) <<"\n"; //Operacion aritmetica = suma 

    //acceder a elem. Con punteros 
    std::cout << "Direccion de memoria: " <<prt +2;
    std::cout <<"Valor POS[2]: " << *(prt + 2 ) <<"\n";





    return 0;
}