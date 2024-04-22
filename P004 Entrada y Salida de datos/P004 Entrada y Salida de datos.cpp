#include <iostream>
#include <locale>
#include <string>
int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");

	std::string Nombres;
	std::cout << "Cuales son tus nombres? \n";
	std::cin >> Nombres;
	std::cout << std::endl;

	std::string Apellidos;
	std::cout << "Cuales son tus apellidos? \n";
	std::cin >> Apellidos;
	std::cout << std::endl;

	std::cout << "Entonces te llamas: " << Nombres << " " << Apellidos << ".\n";
	char sexo;
	std::cout << "¿Cual es tu sexo H o M? \n";
	std::cin >> sexo;
	std::cout << std::endl;

	bool fiebre = true;
	std::cout << "¿Tienes fiebre? true o false\n";
	std::cin >> fiebre;
	std::cout << std::endl;

	bool malestarestomacal = true;
	std::cout << "¿Tienes malestar(es) estomacal(es)? true o false \n";
	std::cin >> malestarestomacal;
	std::cout << std::endl;

	bool alergia = true;
	std::cout << "¿Tienes alergia(s)? true o false \n";
	std::cin >> alergia;
	std::cout << std::endl;

	int altura = 1;
	std::cout << "cual es tu altura en metos? \n";
	std::cin >> altura;
	std::cout << std::endl;

	int peso = 1;
	std::cout << "cual es tu peso en kilogramos? \n";
	std::cin >> peso;
	std::cout << std::endl;

	int imc = peso /(altura * altura);
	std::cout << "tu IMC es = "<< imc << ".\n";

}