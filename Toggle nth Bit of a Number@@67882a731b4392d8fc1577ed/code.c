#include <stdio.h>
int main()
{
    int N,a;
    scanf("%d %d",&N,&a);
    int mask = (1<<a);
    int pp = N ^ mask;
    printf("%d",pp);
    return 0;
}