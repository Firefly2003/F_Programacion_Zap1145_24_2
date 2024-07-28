#include <iostream>
#include <ctime>
#include <locale>

using namespace std;

void llenarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

int main() {

    setlocale(LC_ALL, "");

    int filas, columnas;

    int matriz1[2][3] = { {0, 0, 0}, {0, 0, 0} };

    cout << "En una matriz de 3 columnas y de 2 filas, dame el valor de el número en la coordenada 0,0: ";
    cin >> matriz1[0][0];

    cout << "En una matriz de 3 columnas y de 2 filas, dame el valor de el número en la coordenada 0,1: ";
    cin >> matriz1[0][1];

    cout << "En una matriz de 3 columnas y de 2 filas, dame el valor de el número en la coordenada 0,2: ";
    cin >> matriz1[0][2];

    cout << "En una matriz de 3 columnas y de 2 filas, dame el valor de el número en la coordenada 1,0: ";
    cin >> matriz1[1][0];

    cout << "En una matriz de 3 columnas y de 2 filas, dame el valor de el número en la coordenada 1,1: ";
    cin >> matriz1[1][1];

    cout << "En una matriz de 3 columnas y de 2 filas, dame el valor de el número en la coordenada 1,2: ";
    cin >> matriz1[1][2];

    cout << "Tu matriz es: " << endl;
    for (int Fila1 = 0; Fila1 < 2; ++Fila1) {
        for (int Columna1 = 0; Columna1 < 3; ++Columna1) {
            cout << matriz1[Fila1][Columna1] << " ";
        }
        cout << endl;
    }

    cout << "Ahora te pediré datos para hacer una matriz de las dimensiones que tú desees: " << endl;
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    int** matriz = new int* [filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
    }

    srand(static_cast<unsigned>(time(0)));

    if (filas > 3 || columnas > 3) {
        llenarMatriz(matriz, filas, columnas);
    }
    else {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << "Ingrese el valor para la posición [" << i << "][" << j << "]: ";
                cin >> matriz[i][j];
            }
        }
    }

    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
