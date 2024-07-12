#include <stdio.h>

int add(int,int);

int main()
{
    char name[10];
    int a;
    int b;
    printf("Enter your name\n");
    scanf("%s", name);
    printf("%s\n",a);
    printf("Enter A: ");
    scanf("%d",&a);
    printf("\nEnter B: ");
    scanf("%d",&b);
    printf("A+B = %d\n",add(a,b));
    return 0;
}

int add (int a, int b)
{
    return(a+b);
}
