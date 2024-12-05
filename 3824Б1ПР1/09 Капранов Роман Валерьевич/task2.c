// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdlib.h>
#include <stdio.h>
#include<limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    long long c = long long(a) * long long(b);
    if (c >= UINT_MAX)
    {
        return UINT_MAX;
    }
    else {
        return unsigned int(c);
    }
}
