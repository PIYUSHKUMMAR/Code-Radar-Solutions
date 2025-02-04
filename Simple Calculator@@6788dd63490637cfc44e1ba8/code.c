#include <stdio.h>
int main() 
{
    int a,b,d;
    char z;
    scanf("%c",&z);
    scanf("%d %d",&a,&b,);
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
        default:
        printf("error");
        break;
    }
    return 0;
}