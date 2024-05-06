#include <iostream>
#include <locale>

int main()
{
//En esta parte creo 2 variables y luego le pido al usuario 2 valores de estas variables, para despues darle el valor de su suma
    int Suma1 = 1;
    int Suma2 = 1;
    std::cout << "Dame un numero que al que quieras sumarle otro:\n";
    std::cin >> Suma1;
    std::cout << "Dame otro numero para sumarlo con el pasado:\n";
    std::cin >> Suma2;
    int CalculoSuma = Suma1 + Suma2;
    std::cout << "la suma de los numeros que me diste es:" << CalculoSuma <<"\n";
// Hacemos lo mismo con resta
    int Resta1 = 1;
    int Resta2 = 1;
    std::cout << "Dame un numero que al que quieras restarle otro:\n";
    std::cin >> Resta1;
    std::cout << "Dame otro numero para restarselo al pasado:\n";
    std::cin >> Resta2;
    int CalculoResta = Resta1 - Resta2;
    std::cout << "la resta de los numeros que me diste es:" << CalculoResta << "\n";
// Hacemos lo mismo con multiplicacion
    int Multi1 = 1;
    int Multi2 = 1;
    std::cout << "Dame un numero que al que quieras multiplicarle otro:\n";
    std::cin >> Multi1;
    std::cout << "Dame otro numero para multiplicarlo con el pasado:\n";
    std::cin >> Multi2;
    int CalculoMulti = Multi1 * Multi2;
    std::cout << "la mutiplicacion de los numeros que me diste es:" << CalculoMulti <<"\n";
// Hacemos lo mismo con divisor
    int Divi1 = 1;
    int Divi2 = 1;
    std::cout << "Dame un numero para que sea el dividendo:\n";
    std::cin >> Divi1;
    std::cout << "Dame otro numero para que sea el divisor:\n";
    std::cin >> Divi2;
    int CalculoDivi = Divi1 / Divi2;
    std::cout << "la resta de los numeros que me diste es:" << CalculoDivi << "\n";
// Hacemos lo mismo con potencias
    int Pot1 = 1;
    int Pot2 = 1;
    std::cout << "Dame un numero que al que quieras añadirle una potencia\n";
    std::cin >> Pot1;
    std::cout << "Dame otro numero para que sea la potencia\n";
    std::cin >> Pot2;
    int CalculoPot = pow(Pot1, Pot2);
    std::cout << "la potencia del primer numero con el segundo es " << CalculoPot << "\n";
}
