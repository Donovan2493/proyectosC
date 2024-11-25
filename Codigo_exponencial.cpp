#include<iostream>
#include<math.h>

int main(void)
{

    int numero = 1 ;
    float num2 = 1, T = 1.0, num1 = 1.0, facto = 1.0, contador = 1.0,suma = 1.0;
    const double TOL = 0.01;
    bool A = true;

    std::cout << "ingresa un numero ";
    std::cin >> numero;
    
    while(A)
    {
        if(num2 > TOL  )
        {
            num1 = pow(numero, contador);
            facto *= contador;
            num2 = num1 / facto;
            T += num2;
            suma = num2 + T;

            std::cout << numero << "!" << contador << "\t" << numero << std::endl;
            std::cout << "--" << " = " << "\t--" << " = " << num2 << "\t" << num2 << " + " << T << " = " << suma << std::endl;
            std::cout << contador << "!" << "\t" << facto << std::endl;
            std::cout << std::endl;

            contador++;
        }
        else
        {
            A = false;
        }

        
        }
        
}