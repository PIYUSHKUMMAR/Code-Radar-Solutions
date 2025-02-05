#include <stdio.h>
int main() 
{
    int a,b,d;
    char z;
    scanf("%d %d %c",&a,&b,&z);
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
        default :
        return 1;
    }
    return 0;
}