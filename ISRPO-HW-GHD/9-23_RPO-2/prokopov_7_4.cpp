#include <iostream>
#include <cmath>


int main() {
	system("chcp 1251");
	srand(time(NULL));
	const int size = 7;
	int arr[size][size];
	int max, min;
	int x, y;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 100;
		}
	}

	max = min = arr[0][0];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "max element: " << max << std::endl;
	std::cout << "min element: " << min << std::endl;

	std::cout << "Vvedite koordinatu x kotoruy hotite umnozhit na 2 - ";
	std::cin >> x;

	std::cout << "Vvedite koordinatu y kotoruy hotite umnozhit na 2 - ";
	std::cin >> y;

	arr[x][y] *= 2;

	std::cout << "\nIzmenenniy massiv:" << std::endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}