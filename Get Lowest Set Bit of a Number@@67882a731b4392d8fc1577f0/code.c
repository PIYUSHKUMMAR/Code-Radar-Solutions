#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int mark = N & (~N+1);
    printf("%d",mark);
    return 0;
}