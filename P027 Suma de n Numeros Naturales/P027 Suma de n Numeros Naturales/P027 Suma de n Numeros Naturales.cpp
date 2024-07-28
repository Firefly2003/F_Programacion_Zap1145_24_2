#include <iostream>

int sumaNaturales(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumaNaturales(n - 1);
}

int main() {
    int n;
    std::cout << "Introduce un número natural: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Por favor, introduce un número natural no negativo." << std::endl;
    }
    else {
        std::cout << "La suma de los primeros " << n << " números naturales es: " << sumaNaturales(n) << std::endl;
    }

    return 0;
}
