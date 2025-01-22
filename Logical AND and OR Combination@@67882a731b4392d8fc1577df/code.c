#include <stdio.h>
int main() 
{
    float a;
    float b;
    scanf("%f",&a);
    scanf("%f",&b);
    if ((a>0&&b<0)||(a==0&&b==0)){
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}