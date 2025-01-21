#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%f %f %f",&a,&b,&c);
    float d= (a+b+c)/3;
    printf("Average: %.2f",d);
    return 0;
}