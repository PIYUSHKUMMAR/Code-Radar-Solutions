#include <stdio.h>
int main() 
{
    int a,b;
    char z;
    scanf("%c",&z);
    scanf("%d %d",&a,&b,);
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