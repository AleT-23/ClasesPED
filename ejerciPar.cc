#include <iostream>
int par(int n);
int impar(int n);
int main() {
    int n;
    std::cout << "Ingrese el valor que desea conocer su es par o impar: ";
    std::cin >> n;
    if (par(n) == true)
    {
        std:: cout <<"Su numero es par\n";
    }
    else if (impar(n) == true)
    {
        std:: cout <<"Su numero es impara\n";
    }
    return 0;
}

int par(int n)
{
    if(n % 2 == 0)
    {
        return true;
    }
    else
    {
        return impar(n);
    }
}
int impar(int n)
{
    if(n % 2 != 0)
    {
        return true;
    } 
    else
    {
        return par(n);
    }
}