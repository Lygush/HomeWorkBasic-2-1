#include <iostream>

enum class month {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int monthNumber{};
    bool end{false};
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> monthNumber;
        if (monthNumber < 0 || monthNumber > 12) {
            std::cout << "Неправильный номер!\n";
        } 
        else {
            if (monthNumber == 0) {
                std::cout << "До свидания";
                end = true;
            }
            else if (monthNumber == static_cast<int>(month::january)) {
                std::cout << "Январь\n";
            }
            else if (monthNumber == static_cast<int>(month::february)) {
                std::cout << "Февраль\n";
            }
            else if (monthNumber == static_cast<int>(month::march)) {
                std::cout << "Март\n";
            }
            else if (monthNumber == static_cast<int>(month::april)) {
                std::cout << "Апрель\n";
            }
            else if (monthNumber == static_cast<int>(month::may)) {
                std::cout << "Май\n";
            }
            else if (monthNumber == static_cast<int>(month::june)) {
                std::cout << "Июнь\n";
            }
            else if (monthNumber == static_cast<int>(month::july)) {
                std::cout << "Июль\n";
            }
            else if (monthNumber == static_cast<int>(month::august)) {
                std::cout << "Август\n";
            }
            else if (monthNumber == static_cast<int>(month::september)) {
                std::cout << "Сентябрь\n";
            }
            else if (monthNumber == static_cast<int>(month::october)) {
                std::cout << "Октябрь\n";
            }
            else if (monthNumber == static_cast<int>(month::november)) {
                std::cout << "Ноябрь\n";
            }
            else if (monthNumber == static_cast<int>(month::december)) {
                std::cout << "Декабрь\n";
            }
        }
    } while (!end);
    return 0;
}
