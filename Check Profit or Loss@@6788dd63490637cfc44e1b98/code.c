#include <stdio.h>
int main() 
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("Loss");
    }
    else if (a==b){
        printf("No Profit No Loss");
    }
    else {
        printf("Profit");
    }
    return 0;
}