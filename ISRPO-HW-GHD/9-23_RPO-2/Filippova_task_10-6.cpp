#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T average(T a, T b) {
    return (a + b) / 2;
}

template <typename T>
T absSum(T a, T b) {
    T sum = a + b;
    return (sum >= 0) ? sum : -sum;
}

template <typename T>
void printIntegerPart(T a, T b) {
    T sum = a + b;
    int part = static_cast<int>(sum);
    std::cout << "Целая часть суммы: " << part << std::endl;
}

template <typename T>
void performOperations(T a, T b, int operationChoice) {
    switch (operationChoice) {
    case 1:
        std::cout << "Максимальное значение: " << findMax(a, b) << std::endl;
        break;
    case 2:
        std::cout << "Среднее арифметическое: " << average(a, b) << std::endl;
        break;
    case 3:
        std::cout << "Модуль суммы: " << absSum(a, b) << std::endl;
        break;
    case 4:
        printIntegerPart(a, b);
        break;
    default:
        std::cout << "Ошибк" << std::endl;
    }
}

int getOperationChoice() {
    int choice;
    std::cout << "\nВыберите операцию:\n1. Поиск максимального\n2. Среднее арифметическое\n3. Модуль суммы\n4. Вывод целой части суммы: ";
    std::cin >> choice;
    return choice;
}

int main() {
    system("chcp 1251");
    int choice;
    int operation_choice;

    std::cout << "\nВыберите тип переменных:\n1. int\n2. float\n3. double: ";
    std::cin >> choice;

    if (choice == 1) {
        int a, b;
        std::cout << "Введите два целых числа: ";
        std::cin >> a >> b;

        int operationChoice = getOperationChoice();
        performOperations(a, b, operationChoice);
    }
    else if (choice == 2) {
        float a, b;
        std::cout << "Введите два числа float: ";
        std::cin >> a >> b;

        int operationChoice = getOperationChoice();
        performOperations(a, b, operationChoice);

        
    }
    else if (choice == 3) {
        double a, b;
        std::cout << "Введите два числа double: ";
        std::cin >> a >> b;

        int operationChoice = getOperationChoice();
        performOperations(a, b, operationChoice);
    }
    else {
        std::cout << "Ошибкак" << std::endl;
    }

    return 0;
}