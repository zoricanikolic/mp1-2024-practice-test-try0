// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
	if (a * b >= UINT_MAX)
	{
		printf("%u", UINT_MAX);
		return UINT_MAX;
	}
	else
	{
		printf("%u", a*b);
		return a * b;
	}
}
