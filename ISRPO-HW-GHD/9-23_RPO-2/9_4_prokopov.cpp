#include <iostream>

int main() {
    system("chcp 1251");
    int n;


    std::cout << "Vvedite kol-vo elementov: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Vvedite " << n << " chisel:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int choice;
    std::cout << "\nViberite type sortirovki:" << std::endl;
    std::cout << "1 - po voZrostaniu" << std::endl;
    std::cout << "2 - po ubivaniu " << std::endl;
    std::cout << "vash choice: ";
    std::cin >> choice;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else {
                if (arr[j] < arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    std::cout << "\nOtsortirovanii massive: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    return 0;
}