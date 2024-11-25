#include<iostream>

int main(void)
{
    int m = 1, n = 1, num1 = 1, num2 = 1, num3 = 0, num4 = 1, resultado=0;

    std::cout << "ingresa el numero m ";
    std::cin >> m;

    std::cout << "ingresa el numero n ";
    std::cin >> n;


    for (int i = 1; i <= m; i++)
    {
        num1 *= i;
       
    }
    for (int i = 1; i <= n; i++)
    {

        num2 *= i;
    }

    num3 = m - n;

    for (int i = 1; i <= num3; i++)
    {
        num4 *= i;
    }

    resultado = num1 / (num2 * num4);

    std::cout << "El resultado de la combinatoria de los numeros " << m << " y " << n << " es " << resultado;
}