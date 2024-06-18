

#include <iostream>
int main()
{
    int num = 0;
    std::cout << "este programa te dara el numero que le diste mas 1 y le volvera a sumar 1 hasta que este legue a 10\n"
    std::cout << "dame un numero menor a 10\n";
    std::cin >> num;

    do {
        std::cout << "el numero pasado + 1= " << num << "\n" << std::endl;
        num++;
    } while (num < 10);

    std::cout << "dame un numero menor a 10\n";
    std::cin >> num;
    std::cout << "num = " << num <<"\n"<< std::endl;

    while (num < 10) {
        std::cout << "el numero pasado + 1= " << num << "\n" << std::endl;
        num++;
    }
    std::cout << "dame un numero menor a 10\n";
    std::cin >> num;
    for (int num1 = num; num1 < 10; num1++) {
        std::cout << "el numero pasado + 1= " << num1 <<"\n" << std::endl;
    }
    return 0;
    }       


