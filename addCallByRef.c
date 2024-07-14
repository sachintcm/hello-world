/*
**Sum two numbers using call by reference
*/

#include <stdio.h>

int sum(int *, int *);

int main()
{
    int a;
    int b;
    int *p;
    int *q;

      printf("Enter A: ");
    scanf("%d",&a);
    printf("\nEnter B: ");
    scanf("%d",&b);

    //storing the address of a and b to interger pointer p and q
   // p = &a;
   // q = &b;
    sum(&a,&b);

    return 0;

}

int sum (int *c, int *d)
{
    int add;
    add = *c + *d;
    printf("SUM: %d", add);
}