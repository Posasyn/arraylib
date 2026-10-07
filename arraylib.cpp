#include "arraylib.h"
#include <algorithm>

int arr_sum(const int* a, std::size_t n) {
    int s = 0;
    for (std::size_t i = 0; i < n; ++i) s += a[i];
    return s;
}

int arr_max(const int* a, std::size_t n){
    int mx = a[0]; 
    for (std::size_t i = 0; i < n; ++i) if (a[i] > mx) mx = a[i];
    return mx;
}

int arr_min(const int* a, std::size_t n){
    int mn = a[0]; 
    for (std::size_t i = 0; i < n; ++i) if (a[i] < mn) mn = a[i];
    return mn;
}

double arr_average(const int* a, std::size_t n){
    int sm = 0; 
    for (std::size_t i = 0; i < n; ++i) sm += a[i];
    return double(sm)/n;
}

int arr_count_positive(const int* a, std::size_t n){
    int c_p = 0; 
    for (std::size_t i = 0; i < n; ++i) if (a[i] > 0) c_p += 1;
    return c_p;
}

int arr_count_negative(const int* a, std::size_t n){
    int c_n = 0; 
    for (std::size_t i = 0; i < n; ++i) if (a[i] < 0) c_n += 1;
    return c_n;
}

int arr_count_zero(const int* a, std::size_t n){
    int c_z = 0; 
    for (std::size_t i = 0; i < n; ++i) if (a[i] == 0) c_z += 1;
    return c_z;
}

int arr_product(const int* a, std::size_t n){
    int pr = 1; 
    for (std::size_t i = 0; i < n; ++i) pr *= a[i];
    return pr;
}

double arr_median(const int* a, std::size_t n){
    int* b = new int[n];
    for (std::size_t i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    std::sort(b, b + n); 
    double med;
    if (n % 2 == 1) med = b[n/2];
    else med = (double (b[n/2]) + double (b[n/2 - 1]))/2;
    delete[] b;
    return med;
}