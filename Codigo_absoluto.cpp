#include<iostream>

int absoluto(int numero)
{
    
    if(numero>0)
    {
        std::cout << "el valor absoluto de " << "|"<< numero << "|" << "es " <<numero;
    }
    else if(numero<0)
    {
        numero = -1*numero;

        std::cout << "el valor absoluto de " << "|" << numero << "|" << "es " << numero;
    }
    else
    {
        std::cout << "el valor absoluto de " << "|" << numero << "|" << numero;
    }
    return numero;
}

int main()
{
    int num;
    std::cout << "ingresa un numero ";
    std::cin >> num;

    absoluto(num);
}