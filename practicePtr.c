/*
**Sum two numbers using pointer
*/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int *p;
    int *q;
    int sum;

    printf("Enter A: ");
    scanf("%d",&a);
    printf("\nEnter B: ");
    scanf("%d",&b);

    //storing the address of a and b to interger pointer p and q
    p = &a;
    q = &b;

    sum = *p + *q;

    printf("SUM = *p + *q = %d \n", sum);

    return 0 ;
}