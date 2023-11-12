#include <iostream>
#include <cmath>

// Оголошення функції IsPowerN
bool IsPowerN(int K, int N) {
    if (K <= 0 || N <= 1) {
        return false;
    } else {
        while (K > 1) {
            if (K % N != 0) {
                return false;
            }
            K /= N;
        }
        return true;
    }
}

int main() {
    // Запитати користувача про число N (>1)
    int N;
    std::cout << "Введіть число N (>1): ";
    std::cin >> N;

    // Згенерувати набір arr з 10 цілих додатних чисел
    int arr[10] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

    int Count_Powers_of_N = 0;

    // Використати функцію IsPowerN для підрахунку кількості ступенів числа N
    for (int i = 0; i < 10; ++i) {
        if (IsPowerN(arr[i], N)) {
            Count_Powers_of_N++;
        }
    }

    // Вивести результат на екран
    std::cout << "Кількість ступенів числа " << N << " у наборі: " << Count_Powers_of_N << std::endl;

    return 0;
}
