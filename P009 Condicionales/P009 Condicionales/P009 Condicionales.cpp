#include <iostream>

int main()
{
    int calculo = 0;
    int num1 = 0;
    int num2 = 0;
    int resultado = 0;
    std::cout << "Este es un programa para hacer una calculadora!\n Escribe 1 si quieres hacer una suma.\nEscribe 2 si quieres hacer una resta\nEscribe 3 si quieres hacer una multiplicacion\nEscribe 4 si quieres hacer una division\nEscribe 5 si quieres que te de el valor absoluto de un nuemero\nEscribe 6 si quieres que te diga que numero de los 2 que mes des es mayor o menor al otro\n";
    std::cin >> calculo;
        switch (calculo)
        {
        case 1:
            std::cout << "Dame tu primer numero ";
            std::cin >> num1;
            std::cout << "Dame tu segundo numero para sumarselo al primero ";
            std::cin >> num2;
            resultado = num1 + num2;
            std::cout << "Tu resultado es" << resultado;
            return 0;
        case 2:
            std::cout << "Dame tu primer numero ";
            std::cin >> num1;
            std::cout << "Dame tu segundo numero para restarselo al primero ";
            std::cin >> num2;
            resultado = num1 - num2;
            std::cout << "Tu resultado es" << resultado;
            return 0;
        case 3:
            std::cout << "Dame tu primer numero ";
            std::cin >> num1;
            std::cout << "Dame tu segundo numero para multiplicarlo con el primero ";
            std::cin >> num2;
            resultado = num1 * num2;
            std::cout << "Tu resultado es " << resultado;
            return 0;
        case 4:
            std::cout << "Dame tu primer numero ";
            std::cin >> num1;
            std::cout << "Dame tu segundo numero para dividirselo al primero ";
            std::cin >> num2;
            resultado = num1 / num2;
            std::cout << "Tu resultado es " << resultado;
            return 0;
        case 5:
            std::cout << "Por el culo te la inco jajajaja\n no te creas ahi te va\n";
            std::cout << "Dame un numero";
            std::cin >> num1;
            if (num1 >= 0) {
                resultado = num1;
                std::cout << "Tu resultado es " << resultado;
                return 0;
            }
            else
                resultado = num1 * -1;
                std::cout << "Tu resultado es " << resultado;
            return 0;
        case 6:
            std::cout << "Dame tu primer numero ";
            std::cin >> num1;
            std::cout << "Dame tu segundo numero para compararlo al primero ";
            std::cin >> num2;
            if (num1 > num2) {
                std::cout << "tu primer numero es mayor que el segundo";
                return 0;
            }
            else if (num1 <num2){
                std::cout << "tu primer numero es menor que el segundo";
                return 0;
            }
            else {
                std::cout << "tus dos numeros son iguales";
                return 0;
            }
        
        
        }
}



