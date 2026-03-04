#include <iostream>

int main() {
	system("chcp 1251"); system("cls");
	std::string user_name, password, check_password;
	std::cout << "\t<<<РЕГИСТРАЦИЯ>>>\n";
	std::cout << "Введите имя пользователя: ";
	std::cin >> user_name;
	do {
		std::cout << "Введите пароль: ";
		std::cin >> password;
		std::cout << "Подтвердите пароль: ";
		std::cin >> check_password;
		if (password != check_password) std::cout << "Пароли не совпадают, попробуйте ещё раз!\n";
		else std::cout << "Вы успешно зарегистрированы!\n";
	} while (password != check_password);
	std::string login, entry_password;
	std::cout << "\t<<<ВХОД>>>\n";
	do {
		std::cout << "Введите логин: ";
		std::cin >> login;
		std::cout << "Введите пароль: ";
		std::cin >> entry_password;
		if (login != user_name || entry_password != password) std::cout << "Данные не совпадают, попробуйте ещё раз!\n";
		else std::cout << "Вход успешно выполнен!";
	} while (login != user_name || entry_password != password);
	return 0;
}