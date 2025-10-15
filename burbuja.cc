#include <iostream>
#include <vector>
void OrdenarBurbuja(float arreglo[], int n);
void Imprimirarreglo(float arreglo[], int n);
int main()
{
    std::vector<float> estaturas;
    char continuar;
    do
    {
        float estatura;
        std::cout << "Ingresa la estatura: ";
        std::cin >> estatura;
        estaturas.push_back(estatura);

        std::cout << "¿Deseas continuar agregando estaturas a la cola? (s para seguir / n para parar): ";
        std::cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    int n = estaturas.size();
    float arreglo[n];

    for (int i = 0; i < n; i++)
        arreglo[i] = estaturas[i];

    std::cout << "\nArreglo sin ordenar: ";
    Imprimirarreglo(arreglo, n);

    OrdenarBurbuja(arreglo, n);

    std::cout << "\nArreglo ordenado (de mayor a menor): ";
    Imprimirarreglo(arreglo, n);

    return 0;
}

void OrdenarBurbuja(float arreglo[], int n)
{
    int pasos = 0;
    int intercambios = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            pasos++;

            if (arreglo[j + 1] > arreglo[j])
            {
                float temp = arreglo[j + 1];
                arreglo[j + 1] = arreglo[j];
                arreglo[j] = temp;
                intercambios++;
            }
        }
    }

    std::cout << "\nNumero total de pasos: " << pasos << std::endl;
    std::cout << "Numero total de intercambios: " << intercambios << std::endl;
}

void Imprimirarreglo(float arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arreglo[i] << "   ";
    }
    std::cout << std::endl;
}
