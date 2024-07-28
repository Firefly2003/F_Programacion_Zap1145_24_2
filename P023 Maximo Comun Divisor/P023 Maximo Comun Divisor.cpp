#include <iostream>

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return mcd(b, a % b);
    }
}

int main() {
    int num1, num2;
    std::cout << "Introduce el primer número: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << std::endl;

    return 0;
}