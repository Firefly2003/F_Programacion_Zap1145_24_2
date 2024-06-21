

#include <iostream>

int main() {
    int num1 = 1000;
    int num2 = 1000;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;

    while (num1 >= 0) {
        std::cout << num1 << "\n";
        num1 = num1 - 1;
    }

    do {
        std::cout << num2 << "\n";
        num2 = num2 - 1;
    } while (num2 >= 0);
    
#
   for (int num3 = 1000; num3 >= 0; num3=num3-1) {
           std::cout << num3 << "\n";
        }

   while (num4 <= 100) {
       std::cout << num4 << "\n";
       num4 = num4 + 1;
   }



   while (num5 <= 100) {
       std::cout << num5 << "\n";
       num5 = num5 + 10;
   }

   do {
       std::cout << num6 << "\n";
       num6 = num6 + 10;
   } while (num6 <= 100);

#
   for (int num7 = 0; num7 <= 100; num7 = num7 +10) {
       std::cout << num7 << "\n";
   }
}

