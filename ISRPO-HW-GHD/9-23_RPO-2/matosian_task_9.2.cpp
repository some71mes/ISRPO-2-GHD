#include <iostream>
#include <vector>
int main() {
	srand(time(NULL));
	int sum = 0, min = 0, max = 0;
	double mean = 0.0, vect_size = 0.0;
	std::cout << "Enter array size: ";
	std::cin >> vect_size;
	std::vector<int> numbers(vect_size);
	std::string choice = "";
	std::cout << "How to fill?\n[K]eyboard \\ [R]andom\n>_ ";
	std::cin >> choice;

	if (choice == "K" || choice == "k") {
	std::cout << "Enter array: ";
		for (int i = 0; i < numbers.size(); i++) {
			std::cin >> numbers.at(i);
		}
	}

	else if (choice == "R" || choice == "r") {
		for (int i = 0; i < numbers.size(); i++) {
			numbers.at(i) = rand()%100 - 50;
		}
	}

	std::cout << "\nEntered numbers: ";
	for (int i = 0; i < numbers.size(); i++) {
		std::cout << numbers.at(i) << " ";
		sum += numbers.at(i);
	}

	mean = sum / vect_size;
	std::cout << "\nSum: " << sum << ", arithmetic mean : " << mean;

	min = max = numbers.at(0);
	for (int i = 0; i < numbers.size(); i++) {
		if (numbers.at(i) > max) max = numbers.at(i);
		if (numbers.at(i) < min) min = numbers.at(i);
	}
	std::cout << "\nMin: " << min << ", max: " << max;
}