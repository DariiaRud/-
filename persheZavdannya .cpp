#include <iostream>

int main() {
    // Запитуємо користувача про значення X
    int X;
    std::cout << "Введіть значення X: ";
    std::cin >> X;

    // Підрахунок кількості чисел та виведення їх у зворотньому порядку
    int count = 0;
    for (int i = 0; i >= -90; i--) {
        if (i % X == 0) {
            std::cout << i << " ";
            count++;
        }
    }

    // Виведення кількості на екран
    std::cout << "\nКількість чисел, які кратні " << X << ": " << count << std::endl;

    return 0;
}