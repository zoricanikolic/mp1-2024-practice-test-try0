// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <ctime>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
	if (a * b >= UINT_MAX)
	{
		return UINT_MAX;
	}
	else
	{
		return a * b;
	}
}

void main()
{
	int a, b;
  scanf_s("%d %d", &a, &b);
  printf("%d", product_of_two_numbers(a, b));
}
