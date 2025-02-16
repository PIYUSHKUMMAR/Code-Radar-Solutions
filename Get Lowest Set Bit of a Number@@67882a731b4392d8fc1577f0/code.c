#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        int mark = (1>>i-1);
        printf("%d",mark);
    }
    return 0;
}