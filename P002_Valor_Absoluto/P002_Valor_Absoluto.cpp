#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	int Numero = 0;

	std::cout << "Dame un numero";
	std::cin >> Numero;

	if (Numero < 0)
	{
		Numero = Numero * -1;
		std::cout << "El valor absoluto de tu numero es: " << Numero << ".\n";
	}
	else
	{
		std::cout << "El valor absoluto de tu numero es: " << Numero << ".\n";
	}
}