#include <stdio.h>
/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   int a[5];
   int *p;
   int *p2;

   *a = 98;
   *(a + 1) = 198;
   *(a + 2) = 298;
   a[3] = 398;
   *(a + 4) = 498;
   p = a + 1;
   *p = 98;
   p2 = a + 3;
   *p2 = *p + 1337;
   printf("p = &a;\np: %p\n", p);
   printf("p + 1: %p\n", p + 1);
   printf("p2 = &a;\np2:%p\n", p2);
   printf("p2 + 2: %p\n", p + 2);
   printf("p2 + 10: %p\n", p + 10);
   return (0);
}
