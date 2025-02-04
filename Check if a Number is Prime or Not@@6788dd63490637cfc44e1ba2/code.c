#include <stdio.h>
int main() 
{
    int a;
    int b=1;
    scanf("%d",&a);
    for (int i=1;i<a;i++){
        if (a%i==0){
            int b=0;
            break;
        }
    }
    if (a==1){
        printf("Not Prime");
    }
    else if (b){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}