#include <stdio.h>

int main()
{
    char a[10];
    int a;
    int b;
    printf("Enter your name\n");
    scanf("%s", a);
    printf("%s\n",a);
    printf("Enter A: ");
    scanf("%d",&a);
    printf("\nEnter B: ");
    scanf("%d",&b);
    printf("A+B = %d\n",(a+b));
    return 0;
}
