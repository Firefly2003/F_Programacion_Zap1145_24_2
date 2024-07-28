#include <iostream>
#include <string>

struct Nodo {
    std::string parteDelCuerpo;
    Nodo* siguiente;
};

void imprimirNodos(Nodo* nodo) {
    while (nodo != nullptr) {
        std::cout << nodo->parteDelCuerpo << std::endl;
        nodo = nodo->siguiente;
    }
}

int main() {
    Nodo cabeza;
    Nodo torso;
    Nodo pies;

    cabeza.parteDelCuerpo = "Cabeza";
    torso.parteDelCuerpo = "Torso";
    pies.parteDelCuerpo = "Pies";

    cabeza.siguiente = &torso;
    torso.siguiente = &pies;
    pies.siguiente = nullptr;

    imprimirNodos(&cabeza);

    return 0;
}
