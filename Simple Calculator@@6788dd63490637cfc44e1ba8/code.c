#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b,);
    char z;
    scanf("%c",&z);
    switch(z){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d"a/b);
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}