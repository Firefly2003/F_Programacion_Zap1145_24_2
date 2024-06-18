#include <iostream>
#include <string>
// nombre valido es Antonio y la contraseña es 123456

int main() {
    std::string nombre;

    std::cout << "Nombre de usuario:\n";
    std::cin >> nombre;

    if (nombre == "Antonio") {
        int contra = 0;
        int contraR = 123456;

        std::cout << "Contrasenia:\n";
        std::cin >> contra;

        if (contra = contraR) {
            std::cout << "Bienvenido Antonio\n";
        }
        else {
            std::cout << "Contrasenia invalida\n";
        }
    }
        else {
        std::cout << "Nombre de usuario invalido\n";
        }
}
