#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b)
{
    long long sum = (long long)a + b;

    if (sum > INT_MAX) {
        return INT_MAX;
    } else if (sum < INT_MIN) {
        return INT_MIN;
    }

    return (int)sum;
}

int main()
{
    int a = 2147483640;
    int b = 100;

int sum_of_two_numbers(int a, int b)
{
    long long sum = (long long)a + b;
    if (sum > INT_MAX) {
        return INT_MAX;
    } else if (sum < INT_MIN) {
        return INT_MIN;
    }

    return (int)sum;
}

    int result = sum_of_two_numbers(a, b);
    printf("Result: %d\n", result);

    return 0;
}
// Из-за того что функция main является входной точкой в языке C
// Я ее добавил в самый конец своего кодаи вызываю через main первую функцию
// И вывожу через принт, если делать без функции main получается ошибка
// collect2: error: ld returned 1 exit status
// также добавил 2 тестовых числа для проверки нашей программы
