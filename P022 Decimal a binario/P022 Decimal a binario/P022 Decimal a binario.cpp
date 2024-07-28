#include <iostream>

void Decimal_Binario(int n) {

    if (n == 0) {
        std::cout << 0;
        
    }
    if (n == 1) {
        std::cout << 1;
    }

    Decimal_Binario(n / 2);

    std::cout << n % 2;
}

int main() {
    int decimalNumber;

    std::cout << "Ingrese un número decimal: ";
    std::cin >> decimalNumber;

    if (decimalNumber < 0) {
        std::cout << "El número debe ser positivo." << std::endl;
        return 1;
    }

    std::cout << "El equivalente en binario es: ";
    Decimal_Binario(decimalNumber);

    return 0;
}
