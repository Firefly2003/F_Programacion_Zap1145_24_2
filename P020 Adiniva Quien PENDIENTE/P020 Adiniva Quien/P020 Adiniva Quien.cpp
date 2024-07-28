#include <iostream>
#include <string>
#include <locale>

int main() {
    std::string respuesta;

    std::locale::global(std::locale(""));

    std::cout << "¿Es un deporte de equipo? (responde sí o no): ";
    std::cin >> respuesta;

    for (char& c : respuesta) {
        c = std::tolower(c, std::locale());
    }

    if (respuesta == "sí" || respuesta == "si") {
        std::cout << "¿Es un deporte de pelota o balón? (responde sí o no): ";
        std::cin >> respuesta;

        for (char& c : respuesta) {
            c = std::tolower(c, std::locale());
        }

        if (respuesta == "sí" || respuesta == "si") {
            std::cout << "¿Se juega en un campo? (responde sí o no): ";
            std::cin >> respuesta;

            for (char& c : respuesta) {
                c = std::tolower(c, std::locale());
            }

            if (respuesta == "sí" || respuesta == "si") {
                std::cout << "Estás pensando en Fútbol." << std::endl;
            }
            else if (respuesta == "no") {
                std::cout << "¿Se juega en una pista? (responde sí o no): ";
                std::cin >> respuesta;

                for (char& c : respuesta) {
                    c = std::tolower(c, std::locale());
                }

                if (respuesta == "sí" || respuesta == "si") {
                    std::cout << "Estás pensando en Voleibol." << std::endl;
                }
                else if (respuesta == "no") {
                    std::cout << "Estás pensando en Baloncesto." << std::endl;
                }
                else {
                    std::cout << "Respuesta no válida." << std::endl;
                }
            }
            else {
                std::cout << "Respuesta no válida." << std::endl;
            }
        }
        else if (respuesta == "no") {
            std::cout << "¿Se juega con raquetas o bastones/palos? (responde sí o no): ";
            std::cin >> respuesta;

            for (char& c : respuesta) {
                c = std::tolower(c, std::locale());
            }

            if (respuesta == "sí" || respuesta == "si") {
                std::cout << "Estás pensando en Tenis." << std::endl;
            }
            else if (respuesta == "no") {
                std::cout << "Estás pensando en Golf." << std::endl;
            }
            else {
                std::cout << "Respuesta no válida." << std::endl;
            }
        }
        else {
            std::cout << "Respuesta no válida." << std::endl;
        }
    }
    else if (respuesta == "no") {
        std::cout << "¿Es un deporte de contacto físico directo? (responde sí o no): ";
        std::cin >> respuesta;

        for (char& c : respuesta) {
            c = std::tolower(c, std::locale());
        }

        if (respuesta == "sí" || respuesta == "si") {
            std::cout << "Estás pensando en Rugby." << std::endl;
        }
        else if (respuesta == "no") {
            std::cout << "¿Es un deporte de invierno? (responde sí o no): ";
            std::cin >> respuesta;

            for (char& c : respuesta) {
                c = std::tolower(c, std::locale());
            }

            if (respuesta == "sí" || respuesta == "si") {
                std::cout << "Estás pensando en Esquí." << std::endl;
            }
            else if (respuesta == "no") {
                std::cout << "Estás pensando en Atletismo." << std::endl;
            }
            else {
                std::cout << "Respuesta no válida." << std::endl;
            }
        }
        else {
            std::cout << "Respuesta no válida." << std::endl;
        }
    }
    else {
        std::cout << "Respuesta no válida." << std::endl;
    }

    return 0;
}
