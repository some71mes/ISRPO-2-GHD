#include <iostream>
#include <algorithm>

void findDuplicates(int arr[], int size) {
    std::cout << "Элементы с одинаковыми значениями:" << std::endl;
    bool found = false;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                std::cout << "Значение " << arr[i] << " найдено на позициях: "
                    << i << " и " << j << std::endl;
                found = true;
            }
        }
    }
    if (!found) {
        std::cout << "Повторяющихся элементов не найдено" << std::endl;
    }
}
void printArrayInfo(int arr[], int size) {
    if (size <= 0) return;

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    std::cout << "Информация о массиве:\nРазмер: " << size << std::endl<< "Максимальный элемент: " << max << std::endl  << "Минимальный элемент: " << min << std::endl;
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int* createUniqueArray(int arr[], int size, int& uniqueSize) {
    int* temp = new int[size];
    uniqueSize = 0;

    for (int i = 0; i < size; i++) {
        bool is_duplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate) {
            bool appears_again = false;
            for (int k = i + 1; k < size; k++) {
                if (arr[i] == arr[k]) {
                    appears_again = true;
                    break;
                }
            }

            if (!appears_again) {
                temp[uniqueSize] = arr[i];
                uniqueSize++;
            }
        }
    }

    int* uniqueArr = new int[uniqueSize];
    for (int i = 0; i < uniqueSize; i++) {
        uniqueArr[i] = temp[i];
    }

    delete[] temp;
    return uniqueArr;
}

void printArray(int arr[], int size, const std::string& name) {
    std::cout << name << ": ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    system("chcp 1251");
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Размер массива должен быть положительным" << std::endl;
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << std::endl;


    printArray(arr, size, "Исходный массив");

    findDuplicates(arr, size);

    std::cout << std::endl;

    printArrayInfo(arr, size);

    std::cout << std::endl;


    sortArray(arr, size);
    printArray(arr, size, "Отсортированный массив");

    std::cout << std::endl;

    int uniqueSize;
    int* uniqueArr = createUniqueArray(arr, size, uniqueSize);
    printArray(uniqueArr, uniqueSize, "Массив уникальных элементов");

    delete[] arr;
    delete[] uniqueArr;

    return 0;
}