#include<iostream>

int main()
{
    int num=1, num2=1, numero;

    std::cout << "ingresa el numero que quieres que siga la serie Fibonacci ";
    std::cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        num2 += num; 
        num = num2-num;  

        if(i<2)
        {
            num2 = 1;
            num = 1;
            std::cout << num;
        }

        std::cout  << " "<<num2;

    }
        

}