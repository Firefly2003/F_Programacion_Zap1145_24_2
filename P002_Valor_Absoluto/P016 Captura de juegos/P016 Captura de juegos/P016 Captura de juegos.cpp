#include <iostream>
#include <string>
#include <locale> // Incluimos la biblioteca para manejar la localización

int main() {
    std::string respuesta;

    // Configurar la localización para UTF-8
    std::locale::global(std::locale(""));

    // Pregunta inicial
    std::cout << "¿Se juega con la mano? (responde sí o no): ";
    std::cin >> respuesta;

    // Convertir la respuesta a minúsculas para facilitar la comparación
    for (char& c : respuesta) {
        c = std::tolower(c, std::locale());
    }

    // Determinar el siguiente paso basado en la respuesta
    if (respuesta == "sí" || respuesta == "si") {
        // Pregunta adicional para "sí"
        std::cout << "¿Se utiliza un bate? (responde sí o no): ";
        std::cin >> respuesta;

        // Convertir la respuesta a minúsculas
        for (char& c : respuesta) {
            c = std::tolower(c, std::locale());
        }

        // Determinar el deporte basado en la segunda respuesta para "sí"
        if (respuesta == "sí" || respuesta == "si") {
            std::cout << "Estás pensando en Béisbol." << std::endl;
        }
        else if (respuesta == "no") {
            std::cout << "Estás pensando en Básquetbol." << std::endl;
        }
        else {
            std::cout << "Respuesta no válida." << std::endl;
        }

    }
    else if (respuesta == "no") {
        // Pregunta adicional para "no"
        std::cout << "¿Se usa un palo? (responde sí o no): ";
        std::cin >> respuesta;

        // Convertir la respuesta a minúsculas
        for (char& c : respuesta) {
            c = std::tolower(c, std::locale());
        }

        // Determinar el deporte basado en la segunda respuesta para "no"
        if (respuesta == "sí" || respuesta == "si") {
            std::cout << "Estás pensando en Hockey." << std::endl;
        }
        else if (respuesta == "no") {
            std::cout << "Estás pensando en Fútbol." << std::endl;
        }
        else {
            std::cout << "Respuesta no válida." << std::endl;
        }

    }
    else {
        // Respuesta inicial no válida
        std::cout << "Respuesta no válida." << std::endl;
    }

    return 0;
}