#include <stdio.h>
int main() 
{
    int a,b,d;
    char z;
    scanf("%d %c %d",&a,&z,&b);
    switch(z){
        case '+':
        d=a+b;
        printf("%d",d);
        break;
        case '-':
        d=a-b;
        printf("%d",d);
        break;
        case '*':
        d=a*b;
        printf("%d",d);
        break;
        case '/':
        d=a/b;
        printf("%d",d);
        break;
    }
    return 0;
}