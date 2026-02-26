#include <iostream>
#include <vector>

int main() {
	system("chcp 1251"); system("cls"); srand(time(NULL));
	std::vector<std::vector<int>> vector;
	for (int i = 0; i < 7; i++) {
		std::vector<int> vect;
		for (int j = 0; j < 5; j++) {
			vect.push_back(rand()%21-10);
		}
		vector.push_back(vect);
	}
	for (int i = 0; i < vector.at(0).size(); i++) {
		std::cout << '\t' << '[' << i << ']';
	} std::cout << "\n\n";
	for (int i = 0; i < vector.size(); i++) {
		std::cout << '[' << i << ']' << '\t';
		for (int j = 0; j < vector.at(i).size(); j++) {
			std::cout << vector.at(i).at(j) << '\t';
		} std::cout << "\n\n";
	}
	std::cout << "¬ведите индекс строки дл€ вывода: ";
	int line_num; std::cin >> line_num;
	for (int i = 0; i < vector.size(); i++) {
		if (i == line_num) {
			std::cout << "—трока под индексом " << line_num << ": ";
			for (int j = 0; j < vector.at(i).size(); j++) {
				std::cout << vector.at(i).at(j) << ' ';
			}
		}
	}
	std::cout << "¬ведите значение дл€ поиска: ";
	int num_search; std::cin >> num_search;
	for (int i = 0; i < vector.size(); i++) {
		for (int j = 0; j < vector.at(i).size(); j++) {
			if (vector.at(i).at(j) == num_search) {
				std::cout << "Ёлемент найден по индексу [" << i << "][" << j << "]\n";
			}
		}
	}
	return 0;
}