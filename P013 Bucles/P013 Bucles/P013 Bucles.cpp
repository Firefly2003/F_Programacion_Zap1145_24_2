
#include <iostream>
#include <string>
// nombre valido es Antonio y la contraseña es 123456

int main() {
    std::string nombre;
    int contra = 123456;
    int contraR = 123456;
    nombre = "Antonio";
    int intentos = 0;
    do
    {
        if (intentos == 0) {

            std::cout << "Porfavor ingrese su nombre de Usuario y contraseña\nNombre de usuario:\n";
        }
        if (intentos == 1 ) {
            std::cout << "Porfavor vuelva a ingresar su nombre de Usuario y contraseña\nNombre de usuario:\n";

        }
        if (intentos >=2 ) {
            std::cout << "Bienvenido usuario!\n";
            return (0);
        }
    std::cin >> nombre;

    std::cout << "Contrasenia:\n";
    std::cin >> contra;
    intentos = intentos + 1;
    } while (nombre=="Antonio" && contra == contraR);
    std::cout << "El usuario o la contrasenia son incorrectos, intentelo de nuevo";
    return (0);
}
