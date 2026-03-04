#include <iostream>
int rec(int a, int b) {
    if (b == 0) {
        return a;
    }
    return rec(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Vvedite 1 chislo: ";
    std::cin >> num1;
    std::cout << "\nVvedite 2 chislo: ";
    std::cin >> num2;

    int result = rec(num1, num2);
    std::cout << "NOD etix chisel: " << result << std::endl;
}