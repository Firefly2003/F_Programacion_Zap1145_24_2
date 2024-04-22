#include <iostream>
#include <locale>
#include <string>


int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	//Utilizaremos la variable bool

	bool bandera = true;

	std::cout << "El valor de la variable booleana llamada bandera es: " << bandera << std::endl;
	//Utilizaremos la variable int
	int edad = 0;
	std::cout << "cual es tu edad? \n";
	std::cin >> edad;
	std::cout << std::endl;
	std::cout << "Entonces tienes: " << edad << " años\n";

	//Utilizaremos la variable float
	float pesos = 0;
	std::cout << "¿Cuantos pesos tienes en tu monedero? \n";
	std::cin >> pesos;
	std::cout << std::endl;
	std::cout << "Entonces tienes: " << pesos << " pesos\n";

	//Utilizaremos la variable char
	char nombre;
	std::cout << "¿Cual es tu inicial? \n";
	std::cin >> nombre;
	std::cout << std::endl;
	std::cout << "Entonces tu inicial es:" << nombre << ".\n";

	//Utilizaremos la variable double
	double num;
	std::cout << "¿Cual es tu numero favorito? \n";
	std::cin >> num;
	std::cout << std::endl;
	std::cout << "Entonces tu numero favorito  es:" << num << ".\n";

	//Utilizaremos la variable string
	std::string NombreApellido;
	std::cout << "Cual es tu nombre completo? \n";
	std::cin.ignore();
	std::getline(std::cin, NombreApellido);
	std::cout << "Entonces tu nombre es:" << NombreApellido << ".\n";
	std::cout << std::endl;

	//utilizaremos la variable char[]
	std;;char Iniciales[3];
	std::scanf("%3s", Iniciales);
	std::string Inciales1 = Inciales;
	std : printf("tus iniciales son: %3s", Inciales1.c_str());

}
