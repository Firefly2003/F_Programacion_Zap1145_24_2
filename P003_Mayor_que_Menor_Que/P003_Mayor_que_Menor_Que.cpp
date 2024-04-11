#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	int Numero1 = 0;
	int Numero2 = 0;

	std::cout << "Dame un numero";
	std::cin  >> Numero1;
	std::cout << "Dame otro numero";
	std::cin  >> Numero2;

	if (Numero1 == Numero2)
	{
		std::cout << "Tus numeros son iguales";
	}

	if (Numero1 < Numero2)
	{
		std::cout << "Tu primer numero es menor que el segundo";
	}

	if (Numero1 > Numero2)
	{
		std::cout  << "Tu primer numero es mayor que el segundo";
	}
}
