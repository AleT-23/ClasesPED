#include <iostream>
int suma(int x);
int main (void)
{
    int n;
    std:: cout <<"Ingrese el numero del cual deseas la suma: \n";
    std:: cin >> n;
    std:: cout << suma(n); 
    return 0;
}

int suma(int x)
{
    if(x == 1 )
    {
        return 1;
    }
    else
    {

        return x + suma(x -1);
        //5 * factorial(5-1)
        //4 * factorial(4-1)
        //3 * factorial(3-1)
        //2 * factorial(2-1)
    }

}