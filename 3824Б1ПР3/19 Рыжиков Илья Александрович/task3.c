// Задача 3. Найти максимум из вешественных чисел a и b
#include <stdio.h>

double max_of_two_numbers(double a, double b)
{
    if(a > b)
        return a;
    return b;
}

int main()
{
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    c = max_of_two_numbers(a, b);
    printf("%lf", c);

    return 0;
}
