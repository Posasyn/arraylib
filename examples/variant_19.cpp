#include "arraylib.h"
#include <iostream>
#include <iomanip>
std::size_t arr_count_above(const int* arr, std::size_t n, int threshold) {
    std::size_t count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i] > threshold) {
            ++count;
        }
    }
    return count;
}

int main() {
    int pulse[] = { 118, 125, 132, 145, 151, 148, 139, 128, 121, 116 };
    const std::size_t n = sizeof(pulse) / sizeof(pulse[0]);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Количество измерений: " << n << '\n';
    std::cout << "Минимальный пульс: " << arr_min(pulse, n) << '\n';
    std::cout << "Максимальный пульс: " << arr_max(pulse, n) << '\n';
    std::cout << "Средний пульс: " << arr_average(pulse, n) << '\n';
    std::cout << "Медиана пульса: " << arr_median(pulse, n) << '\n';
    std::cout << "Количество измерений выше 140: " << arr_count_above(pulse, n, 140) << '\n';

    return 0;
}