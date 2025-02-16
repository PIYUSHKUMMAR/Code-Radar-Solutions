#include <stdio.h>
int main()
{
    int N,k;
    scanf("%d",&N);
    int mark = N & (~N+1);
    for (int i=1;i<=N;i++){
        int f=mark & i;
        if (mark){
            printf("%d",i-1);
            break;
        }
    }
    return 0;
}