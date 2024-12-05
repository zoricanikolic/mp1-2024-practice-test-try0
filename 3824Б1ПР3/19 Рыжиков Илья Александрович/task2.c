#include <limits.h>
#include <stdio.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    if (a != 0 && b > UINT_MAX / a) {
        return UINT_MAX;
    }
    return a * b;
}

int main(){
    unsigned int a, b, c;
    scanf("%u", &a);
    scanf("%u", &b);

    c = product_of_two_numbers(a,b);
    printf("%u", c);

    return 0;
}
