#include <iostream>

int main() {
    int Peleadores = 0;
    int Tipo = 0;
    int Batallas = 0;

    std::cout << "Introduce el número de peleadores en la arena: ";
    std::cin >> Peleadores;

    std::cout << "Selecciona el sistema de combate: \n1 quieres escoger Royal Rumble\n;si quieres escoger Eliminatoria directa\n3 si quieres escoger Grupos, semifinal y final\n";
    std::cin >> Tipo;
    switch (Tipo) {


        case 1: 
        Batallas = (Peleadores * (Peleadores - 1)) / 2;
        break;


        case 2: 
        Batallas = Peleadores - 1;
        break;


        case 3: 
        if (Peleadores < 4) {
            std::cout << "Se necesitan al menos 4 peleadores para el sistema de grupos.\n";
            return 1;
        }
        else {
            int grupos = Peleadores / 4;
            int batallasGrupo = grupos * (4 * (4 - 1) / 2); 
            int clasificados = grupos;
            int batallasFinales = clasificados - 1; 
            int Batallas = batallasGrupo + batallasFinales;
        }
        break;


    default:
        std::cout << "Sistema de combate no válido.\n";
        return 1;
    }

    std::cout << "El número de batallas necesarias es: " << Batallas << std::endl;

    return 0;
}
