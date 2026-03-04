#include <iostream>
#include <vector>
int main() {
	srand(time(NULL));
	system("chcp 1251");
	int const stolb = 5;
	int const strock = 8;
	int arr[stolb][strock];
	int summa = 0;
	for (size_t i = 0; i < stolb; i++)
	{
		for (size_t j = 0; j < strock; j++)
		{
			arr[i][j] = rand() % 21 - 10;
			std::cout << arr[i][j] << "\t";
			summa += arr[i][j];
		}
		std::cout << "\n\n";
	}
	std::cout << summa << "\n";
	int max = arr[0][0]; int min = max;
	for (size_t i = 0; i < stolb; i++)
	{
		for (size_t j = 0; j < strock; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
		std::cout << max << ", " << min;
}