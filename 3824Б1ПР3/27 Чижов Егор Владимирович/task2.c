#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    unsigned long long product = (unsigned long long)a * b;

    if (product > UINT_MAX) {
        return UINT_MAX;
    }

    return (unsigned int)product;
}

int main()
{
    unsigned int a = 2000000000;
    unsigned int b = 3;        

    unsigned int result = product_of_two_numbers(a, b);
    printf("Product: %u\n", result);

    return 0;
}
// Из-за того что функция main является входной точкой в языке C
// Я ее добавил в самый конец своего кода вызываю через main первую функцию
// И вывожу через принт, если делать без функции main на выводе будет ошибка
// collect2: error: ld returned 1 exit status
// также добавил 2 тестовых числа для проверки нашей программы
