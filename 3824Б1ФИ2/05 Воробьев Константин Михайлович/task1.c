#include <stdlib.h>
int sum_of_two_numbers(int a, int b)
{
  if(a>=INT_MAX-b) return INT_MAX;
  if(a<=INT_MIN-b) return INT_MIN;
  else return a+b;
}
