#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        if (i==1 | i==N){
            for (int j=1;j<=N;j++){
                printf("*");
            }
            printf("\n");
        }
        else if (i>1 | i<N){
            printf("*");
            for (int i=2;i<N;i++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}