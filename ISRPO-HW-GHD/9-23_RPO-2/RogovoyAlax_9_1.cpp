#include <iostream>
#include <vector>
int main() {
	system("chcp 1251");
	int size = 0;
	std::cout << "Ведите размер: ";
	std::cin >> size;
	std::vector<int> vec(size);
	std::cout << "ведите "<< size <<" чисел(можно дробными): ";
	for (size_t i = 0; i < size; i++)
	{
		std::cin >>vec.at(i);
	}
	float summa = 0;
	for (size_t i = 0; i < size; i++)
	{
		summa += vec.at(i);
	}
	std::cout << "\nсумма чисел: " << summa;
	std::cout << "\nсреднеорифметические числа: " << summa / size;
	std::cout << "\nминимальный и максимальные числа: ";
	int max = vec.at(0); int min = max;
	for (size_t i = 0; i < size; i++)
	{
		if (vec.at(i) > max)
		{
			max = vec.at(i);
		}
		if (vec.at(i) < min)
		{
			min = vec.at(i);
		}
	}
	std::cout << max <<", " << min;
}