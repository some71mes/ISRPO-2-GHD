#include <iostream>
#include <vector>
int main() {
	std::vector<int> numbers(5);
	int sum = 0, min = 0, max = 0;
	double mean = 0;
	std::cout << "Enter 5 numbers: ";
	for (int i = 0; i < 5; i++) {
		std::cin >> numbers.at(i);
	}
	std::cout << "Entered numbers: ";
	for (int i = 0; i < numbers.size(); i++) {
		std::cout << numbers.at(i) << " ";
		sum += numbers.at(i);
	}
	mean = sum / 5.0;
	std::cout << "\nSum: " << sum;
	std::cout << "\nArithmetic mean: " << mean;

	min = max = numbers.at(0);
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers.at(i) > max) max = numbers.at(i);
		if (numbers.at(i) < min) min = numbers.at(i);
	}
	std::cout << "\nMin: " << min << "\nMax: " << max;
}