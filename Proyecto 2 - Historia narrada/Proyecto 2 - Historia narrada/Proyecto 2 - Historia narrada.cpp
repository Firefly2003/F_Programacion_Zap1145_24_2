#include <iostream>
#include <string>

using namespace std;

void caminoBosque();
void caminoMontana();
void caminoCiudad();

int main() {
    int eleccion;
    bool eleccionValida = false;

    cout << "Esta es una epica aventura usuario, espero estes preparado!" << endl;
    cout << "De la nada apareces en un mundo nuevo, parece que haz renacido como aventurero!" << endl;
    cout << "Tienes 3 opciones, ir al bosque a cazar, ir a la montaña para sacar minerales o quedarte en la ciudad" << endl;

    while (!eleccionValida) {
        cout << "1. Ir al bosque" << endl;
        cout << "2. Ir a la montaña" << endl;
        cout << "3. Quedarte en la ciudad" << endl;
        cout << "Elige un camino (1, 2, 3): ";
        cin >> eleccion;

        if (eleccion == 1) {
            caminoBosque();
            eleccionValida = true;
        }
        else if (eleccion == 2) {
            caminoMontana();
            eleccionValida = true;
        }
        else if (eleccion == 3) {
            caminoCiudad();
            eleccionValida = true;
        }
        else {
            cout << "Elección no válida. Por favor, elige una opción válida." << endl;
        }
    }

    return 0;
}

void caminoBosque() {
    int eleccion;
    bool eleccionValida = false;

    cout << "Decides adentrarse en el bosque." << endl;
    cout << "Después de caminar un rato, se encuentra con un río." << endl;

    while (!eleccionValida) {
        cout << "1. Cruzar el río" << endl;
        cout << "2. Seguir el río" << endl;
        cout << "Elige una acción (1, 2): ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "Cruza el río y encuentras un tesoro escondido! Con este tesoro puedes tener recursos para sobrevivir!" << endl;
            eleccionValida = true;
        }
        else if (eleccion == 2) {
            cout << "Sigues el río y encuentras una cabaña abandonada, tristemente no hay nada de valor dentro de la cabaña y solo sirve como refugio temporal" << endl;
            eleccionValida = true;
        }
        else {
            cout << "Elección no válida. Por favor, elige una opción válida." << endl;
        }
    }
}

void caminoMontana() {
    int eleccion;
    bool eleccionValida = false;

    cout << "Decides subir la montaña." << endl;
    cout << "Durante la subida, te encuentras con una cueva." << endl;

    while (!eleccionValida) {
        cout << "1. Entrar en la cueva" << endl;
        cout << "2. Continuar subiendo" << endl;
        cout << "Elige una acción (1, 2): ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "Entras en la cueva y encuentra un dragón, el dragon enfurecido te come!" << endl;
            eleccionValida = true;
        }
        else if (eleccion == 2) {
            cout << "Continúas subiendo y llega a la cima y encuentras muchos minerales de valor, con ellos puedes sobrevivir por meses!" << endl;
            eleccionValida = true;
        }
        else {
            cout << "Elección no válida. Por favor, elige una opción válida." << endl;
        }
    }
}

void caminoCiudad() {
    int eleccion;
    bool eleccionValida = false;

    cout << "Decides ir a la ciudad." << endl;
    cout << "En la ciudad, te encuentras con un mercado bullicioso." << endl;

    while (!eleccionValida) {
        cout << "1. Explorar el mercado" << endl;
        cout << "2. Visitar la plaza principal" << endl;
        cout << "Elige una acción (1, 2): ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "Exploras el mercado y encuentras un objeto mágico!" << endl;
            eleccionValida = true;
        }
        else if (eleccion == 2) {
            cout << "Visitas la plaza principal y participa en una celebración, en ella conoces a otros aventureros que te ofrecen unirte a su equipo." << endl;
            eleccionValida = true;
        }
        else {
            cout << "Elección no válida. Por favor, elige una opción válida." << endl;
        }
    }
}
