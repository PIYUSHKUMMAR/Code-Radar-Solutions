#include <stdio.h>
int main() 
{
    int N,a;
    scanf("%d %d",&N,&a);
    int mask= ~(1<<a);
    int ap = mask & N;
    printf("%d",ap);
    return 0;
}