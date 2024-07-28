#include <iostream>

int producto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return -producto(a, -b);
    }
    return a + producto(a, b - 1);
}

int main() {
    int num1, num2;

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    std::cout << "El producto de " << num1 << " y " << num2 << " es: " << producto(num1, num2) << std::endl;

    return 0;
}
