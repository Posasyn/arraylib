#include "arraylib.h"
#include <iostream>

int main() {
    int data[] = {5, 3, 8, 1, 9, 2};

    std::cout << "Sum: " << arr_sum(data, 6) << '\n';
    std::cout << "Max: " << arr_max(data, 6) << '\n';
    std::cout << "Min: " << arr_min(data, 6) << '\n';
    std::cout << "Average: " << arr_average(data, 6) << '\n';
    std::cout << "Count positive: " << arr_count_positive(data, 6) << '\n';
    std::cout << "Count negative: " << arr_count_negative(data, 6) << '\n';
    std::cout << "Count zero: " << arr_count_zero(data, 6) << '\n';
    std::cout << "Product: " << arr_product(data, 6) << '\n';
    std::cout << "Median: " << arr_median(data, 6) << '\n';

    return 0;
}