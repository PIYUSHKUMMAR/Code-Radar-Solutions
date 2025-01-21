#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    int d= (a+b+c)/3;
    printf("Average: %.2f",d);
    return 0;
}