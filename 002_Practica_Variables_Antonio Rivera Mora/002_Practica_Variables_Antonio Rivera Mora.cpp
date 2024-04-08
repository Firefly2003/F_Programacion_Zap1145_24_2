

#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	bool bandera = true;

	std::cout << "El valor de la variable booleana llamada bandera es: " << bandera << std::endl;

	int edad = 0;
	std::cout << "El valor de la variable entera llamda edad es: " << edad << std::endl;
	std::cout << "cual es tu edad? \n";
	std::cin >> edad;
	std::cout << std::endl;
	std::cout << "Entonces tienes: " << edad << " años\n";

	float dias = 0;
	std::cout << "¿Cuantos dias tiene el mes en el que estas? \n";
	std::cin >> dias;
	std::cout << std::endl;
	std::cout << "Entonces tiene: " << dias << " dias\n";

	char nombre;
	std::cout << "¿Cual es tu inicial? \n";
	std::cin >> nombre;
	std::cout << std::endl;
	std::cout << "Entonces tu inicial  es:" << nombre << ".\n";

	double num;
	std::cout << "¿Cual es tu numero favorito? \n";
	std::cin >> num;
	std::cout << std::endl;
	std::cout << "Entonces tu numero favorito  es:" << num << ".\n";

	std::string NombreApellido;
	std::cout << "Cual es tu nombre completo? \n";
	std::cin >> NombreApellido;
	std::cout << "Entonces tu nombre es:" << NombreApellido << ".\n";
	std::cout << std::endl;

}


