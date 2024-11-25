#include<iostream>

int main(void)
{
    int  num = 1, numero=0;

    std::cout << "ingrese un numero para saber su factorial:";
    std::cin>>numero;

    for (int i=1; i<=numero; i++)
    {
       num *= i;
    }

    std::cout<<num;
}