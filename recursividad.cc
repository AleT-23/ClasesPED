#include <iostream>
int factorial(int x);
int main (void)
{
    int n;
    std:: cout <<"Ingrese el numero del cual deseas el factorial: \n";
    std:: cin >> n;
    std:: cout << factorial(n); 
    return 0;
}

int factorial(int x)
{
    if(x <= 1 )
    {
        return 1;
    }
    else
    {

        return x * factorial(x -1);
        //5 * factorial(5-1)
        //4 * factorial(4-1)
        //3 * factorial(3-1)
        //2 * factorial(2-1)
    }

}