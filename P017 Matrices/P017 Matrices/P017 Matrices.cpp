#include <iostream>
#include <ctime>   
#include <locale>




template<size_t N>
void llenarMatriz(int(&matriz)[N][N]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            matriz[i][j] = rand() % 11;
        }
    }
}

template<size_t N>
void mostrarMatriz(int(&matriz)[N][N]) {
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template<size_t N>
void mostrarPosicion(int(&matriz)[N][N], size_t x, size_t y) {
    if (x < N && y < N) {
        std::cout << "El valor en la posición [" << x << "][" << y << "] es: " << matriz[x][y] << std::endl;
    }
    else {
        std::cout << "Posición fuera de rango." << std::endl;
    }
}

int main() {

    setlocale(LC_ALL, "");

    srand(static_cast<unsigned int>(time(0)));

    int matriz3x3[3][3];
    int matriz5x5[5][5];
    int matriz10x10[10][10];

    llenarMatriz(matriz3x3);
    llenarMatriz(matriz5x5);
    llenarMatriz(matriz10x10);

    int opcion;

    do {
        std::cout << "Seleccione la matriz que desea ver:" << std::endl;
        std::cout << "1. Matriz 3x3" << std::endl;
        std::cout << "2. Matriz 5x5" << std::endl;
        std::cout << "3. Matriz 10x10" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Matriz 3x3 completa:" << std::endl;
            mostrarMatriz(matriz3x3);
            break;
        case 2:
            std::cout << "Matriz 5x5 completa:" << std::endl;
            mostrarMatriz(matriz5x5);
            break;
        case 3:
            std::cout << "Matriz 10x10 completa:" << std::endl;
            mostrarMatriz(matriz10x10);
            break;
        case 4:
            std::cout << "Saliendo..." << std::endl;
            break;
        default:
            std::cout << "Opción no válida. Intente nuevamente." << std::endl;
            break;
        }

        if (opcion >= 1 && opcion <= 3) {
            size_t x, y;
            std::cout << "Ingrese la posición que desea consultar (fila y columna): ";
            std::cin >> x >> y;

            switch (opcion) {
            case 1:
                mostrarPosicion(matriz3x3, x, y);
                break;
            case 2:
                mostrarPosicion(matriz5x5, x, y);
                break;
            case 3:
                mostrarPosicion(matriz10x10, x, y);
                break;
            }
        }

    } while (opcion != 4);

    return 0;
}
