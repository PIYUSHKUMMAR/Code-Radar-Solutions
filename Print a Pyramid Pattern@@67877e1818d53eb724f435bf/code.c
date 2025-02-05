#include <stdio.h>
int main() 
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (int j=i+1;j<=N;j++){
            printf(" ");
        }
        for (int k=1;k<=N+2;k+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}