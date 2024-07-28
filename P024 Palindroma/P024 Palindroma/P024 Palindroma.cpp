#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(const std::string& palabra, int inicio, int fin) {
    if (inicio >= fin) {
        return true;
    }
    if (palabra[inicio] != palabra[fin]) {
        return false;
    }
    return esPalindromo(palabra, inicio + 1, fin - 1);
}

int main() {
    std::string palabra;
    std::cout << "Introduce una palabra: ";
    std::cin >> palabra;

    std::transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

    if (esPalindromo(palabra, 0, palabra.length() - 1)) {
        std::cout << "La palabra \"" << palabra << "\" es un palíndromo." << std::endl;
    }
    else {
        std::cout << "La palabra \"" << palabra << "\" no es un palíndromo." << std::endl;
    }

    return 0;
}
