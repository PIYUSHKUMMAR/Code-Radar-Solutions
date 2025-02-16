#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        int mark = (1>>i-1);
        if (mark){
            printf("%d",i-1);
            break;
        }
    }
    return 0;
}