#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int mark = N & -N;
    printf("%d",mark);
    return 0;
}