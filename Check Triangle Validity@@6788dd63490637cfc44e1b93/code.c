#include <stdio.h>
int main() 
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b+c & b<a+c & c<a+b){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}