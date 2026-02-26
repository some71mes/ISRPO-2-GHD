#include <iostream>

void sixDigit(int number) {
	if (99999 < number && number < 1000000 || -99999 > number && number > -1000000)
		std::cout << number << " - is six-digit number";
	else std::cout << number << " - is not six-digit";
}

int main() {
	int number = 0;
	std::cout << "Enter number: ";
	std::cin >> number;
	sixDigit(number);
}