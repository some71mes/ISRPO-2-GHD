#include <iostream>
int main() {
	int const size = 7;
	float arr[size];
		std::cout << "ведите 7 чисел (можно дробными): "; 
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
		std::cout << "\nОтрицательные числа: ";
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			std::cout << arr[i] << " ";
		}
	}
		std::cout << "\nнецелые  числа: ";
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != (int)arr[i]) {
			std::cout << arr[i] << " ";
		}
	}
	std::cout << "\nцелые положительные числа: ";
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			if (arr[i] == (int)arr[i]) {
				std::cout << arr[i] << " ";
			}
		}
	}
}