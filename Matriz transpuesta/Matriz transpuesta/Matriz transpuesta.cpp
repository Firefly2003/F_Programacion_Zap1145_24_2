#include <iostream>
using namespace std;
int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transpuesta[3][3];

    for (int filas = 0; filas < 3; ++filas) {
        for (int columnas = 0; columnas < 3; ++columnas) {
            transpuesta[columnas][filas] = matriz[filas][columnas];
        }
    }
    cout << "Matriz transpuesta de 3x3 del 1 al 9:\n";
    for (int filas = 0; filas < 3; ++filas) {
        for (int columnas = 0; columnas < 3; ++columnas) {
            cout << transpuesta[filas][columnas] << " ";
        }
        cout << "\n";
    }
    return 0;
}
