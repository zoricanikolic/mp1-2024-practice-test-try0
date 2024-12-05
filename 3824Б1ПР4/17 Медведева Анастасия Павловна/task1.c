// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b) {
    if (a > 0 && b > UINT_MAX / a) {
        return UINT_MAX;
    }
    return a * b;
}
