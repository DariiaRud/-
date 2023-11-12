#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX_ROWS = 20;
const int MAX_COLS = 20;

int main() {
    // Ініціалізація генератора випадкових чисел
    std::srand(std::time(0));

    // Згенеруємо випадковий розмір масиву (rows та cols)
    int rows = rand() % MAX_ROWS + 1;
    int cols = rand() % MAX_COLS + 1;

    // Оголошення та заповнення двовимірного масиву випадковими числами
    double array[MAX_ROWS][MAX_COLS];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = rand() % 100 - 50; // Генеруємо випадкове число від -50 до 49
        }
    }

    // Обчислення та виведення кількості недодатніх елементів в кожному рядку
    for (int i = 0; i < rows; ++i) {
        int negativeCount = 0;
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] < 0) {
                negativeCount++;
            }
        }
        std::cout << "Рядок " << i + 1 << ": " << negativeCount << " недодатніх елементів." << std::endl;
    }

    return 0;
}
