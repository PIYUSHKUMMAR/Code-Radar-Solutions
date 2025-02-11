#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (int j=i+1;j<=N;j++){
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for (int l=1;l<=N-1;l++){
        for (int m=1;m<=l;m++){
            printf(" ");
        }
        for (int n=1;n<=2*(N-1)-1;n+2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}