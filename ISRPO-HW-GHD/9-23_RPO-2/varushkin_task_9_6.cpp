#include <iostream>
#include <vector>

int main() {
	system("chcp 1251"); system("cls"); srand(time(NULL));
	int random_column_size, random_string_size, random_page_size;
	// Одномерный массив
	random_column_size = rand() % 29 + 2;
	std::vector<int>one_dimensional_vector;
	for (int i = 0; i < random_column_size; i++) { one_dimensional_vector.push_back(rand() % 21 - 10); }
	std::cout << "Размер одномерного массива: " << one_dimensional_vector.size();
	std::cout << "\nЭлементы одномерного массива: ";
	for (int i = 0; i < one_dimensional_vector.size(); i++) { std::cout << one_dimensional_vector.at(i) << ' '; }
	// Двумерный массив
	random_string_size = rand() % 10 + 1;
	random_column_size = rand() % 10 + 1;
	std::vector<std::vector<int>>two_dimensional_vector;
	for (int i = 0; i < random_string_size; i++) {
		std::vector<int>vect1;
		for (int j = 0; j < random_column_size; j++) {
			vect1.push_back(rand() % 21 - 10);
		} two_dimensional_vector.push_back(vect1);
	}
	std::cout << "\n\nРазмер двумерного массива: " << two_dimensional_vector.size() << ';' << two_dimensional_vector.at(0).size();
	std::cout << "\nЭлементы двумерного массива: \n\n";
	for (int i = 0; i < two_dimensional_vector.size(); i++) {
		for (int j = 0; j < two_dimensional_vector.at(i).size(); j++) {
			std::cout << two_dimensional_vector.at(i).at(j) << '\t';
		} std::cout << "\n\n";
	}
	// Трёхмерный массив
	std::cout << "Введите количество страниц, строк, столбцов: ";
	std::cin >> random_page_size >> random_string_size >> random_column_size;
	std::vector<std::vector<std::vector<int>>>three_dimensional_vector;
	for (int i = 0; i < random_page_size; i++) {
		std::vector<std::vector<int>>vect2;
		for (int j = 0; j < random_string_size; j++) {
			std::vector<int>vect1;
			for (int l = 0; l < random_column_size; l++) {
				vect1.push_back(rand() % 21 - 10);
			} vect2.push_back(vect1);
		} three_dimensional_vector.push_back(vect2);
	}
	std::cout << "Размер трёхмерного массива: " << three_dimensional_vector.size() << ';' << three_dimensional_vector.at(0).size() << ';' << three_dimensional_vector.at(0).at(0).size();
	std::cout << "\nЭлементы трёхмерного массива: \n\n";
	for (int i = 0; i < three_dimensional_vector.size(); i++) {
		for (int j = 0; j < three_dimensional_vector.at(i).size(); j++) {
			for (int l = 0; l < three_dimensional_vector.at(i).at(j).size(); l++) {
				std::cout << three_dimensional_vector.at(i).at(j).at(l) << '\t';
			} std::cout << "\n\n";
		} std::cout << "\n\n";
	}
	return 0;
}