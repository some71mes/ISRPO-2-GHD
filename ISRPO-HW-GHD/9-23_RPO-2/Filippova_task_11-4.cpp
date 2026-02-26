#include <iostream>
#include <vector>
#include <string>
#include <limits>

class Sale {
private:
    int id;
    double amount;

public:
    Sale(int sale_id, double sale_amount) : id(sale_id), amount(sale_amount) {}

    int getId() const { return id; }
    double getAmount() const { return amount; }
};

class CashRegister {
private:
    std::vector<Sale> sales;
    int next_id;

public:
    CashRegister() : next_id(1) {}
    void newSale() {
        double amount;
        std::cout << "Введите сумму продажи: ";
        std::cin >> amount;

        sales.push_back(Sale(next_id++, amount));
        std::cout << "Продажа №" << (next_id - 1) << " на сумму " << amount << " добавлена." << std::endl;
    }

    void showSales() const {
        if (sales.empty()) {
            std::cout << "Список продаж пуст." << std::endl;
            return;
        }

        std::cout << "\nСписок продаж:" << std::endl;
        for (int i = 0; i < sales.size(); i++) {
            std::cout << "Продажа №" << sales.at(i).getId()
                << ": " << sales.at(i).getAmount() << std::endl;
        }
    }

    void cancelLastSale() {
        if (sales.empty()) {
            std::cout << "Нет продаж для отмены." << std::endl;
            return;
        }

        Sale last_sale = sales.back();
        sales.pop_back();
        std::cout << "Продажа №" << last_sale.getId()
            << " на сумму " << last_sale.getAmount() << " отменена." << std::endl;
    }

    void showReport() const {

        if (sales.empty()) {
            std::cout << "Количество продаж: 0" << std::endl << "Общая сумма: 0" << std::endl;
            return;
        }

        double total = 0;
        for (size_t i = 0; i < sales.size(); i++) {
            total += sales.at(i).getAmount();
        }
        std::cout << "Количество продаж: " << sales.size() << std::endl  << "Общая сумма: " << total << std::endl;
    }

    void showMinMax() const {
        if (sales.empty()) {
            std::cout << "Нет продаж для анализа." << std::endl;
            return;
        }
        double max_amount = sales.at(0).getAmount();
        double min_amount = sales.at(0).getAmount();
        int max_id = sales.at(0).getId();
        int min_id = sales.at(0).getId();

        for (int i = 1; i < sales.size(); i++) {
            double currentAmount = sales.at(0).getAmount();
            int currentId = sales.at(0).getId();

            if (currentAmount > max_amount) {
                max_amount = currentAmount;
                max_id = currentId;
            }
            if (currentAmount < min_amount) {
                min_amount = currentAmount;
                min_id = currentId;
            }
        }
        std::cout << "Максимальная продажа: №" << max_id
            << " на сумму " << max_amount << std::endl;
        std::cout << "Минимальная продажа: №" << min_id
            << " на сумму " << min_amount << std::endl;
    }
    bool hasSales() const {
        return !sales.empty();
    }
};

void showMenu() {
 
    std::cout << "1. Новая продажа\n2. Список всех продаж\n3. Отменить последнюю продажу\n4. Отчёт (количество и общая сумма)" << std::endl;
    std::cout << "5. Максимальная и минимальная продажа\n0. Выход: ";
}

int main() {
    system("chcp 1251");
    CashRegister register1;
    int choice;
    do {
        showMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            register1.newSale();
            break;

        case 2:
            register1.showSales();
            break;

        case 3:
            register1.cancelLastSale();
            break;

        case 4:
            register1.showReport();
            break;

        case 5:
            register1.showMinMax();
            break;

        case 0:
            break;

        default:
            std::cout << "Неверный выбор" << std::endl;
        }

    } while (choice != 0);

    return 0;
}