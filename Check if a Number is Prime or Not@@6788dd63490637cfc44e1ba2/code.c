#include <stdio.h>
int main() 
{
    int a;
    int b=1;
    scanf("%d",&a);
    if (a<2){
        b=0;
    }
    for (int i=2;i<a;i++){
        if (a%i==0){
            b=0;
            break;
        }
    }
    if (b){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}