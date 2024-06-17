#include <iostream>
#include <string>
int main()
{
    int edad = 0;
    int numero = 0;
    std::string nombre;
    std::string contra;
    bool bot = true;

    std::cout << "Cual es tu edad?\n";
    std::cin >> edad;
    std::cin.ignore();

    if (edad < 18) {
        std::cout << "Solo se admiten mayores de edad\n";
        return 0;
    }
    else {
        std::cout << "Cual es tu nombre de usuario?\n";
        std::getline(std::cin, nombre);

        if (nombre != "Antonio") {
            std::cout << "Nombre de usuario invalido.\n";
            return 0;
        }
        else {
            std::cout << "Cual es tu contraseña?\n";
            std::getline(std::cin, contra);
            if (contra != "123456") {
                std::cout << "contraseña incorrecta\n";
                return 0;
            }
            else {
                std::cout << "Escribe 1 si eres un bot, escribe 0 si eres un humano\n";
                std::cin >> bot;
                if (bot == true) {
                    std::cout << "no se admiten bots aqui\n";
                    return 0;
                }
                else {
                    std::cout << "cuando es 1 mas 1?\n";
                    std::cin >> numero;
                    if (numero == 2) {
                        std::cout <<"acceso concedido, bienvenido!";
                            return 0;
                    }
                    else {
                        std::cout << "no se admite gente que no sabe sumar.";
                    }
                }
            }
        }



    }
}


