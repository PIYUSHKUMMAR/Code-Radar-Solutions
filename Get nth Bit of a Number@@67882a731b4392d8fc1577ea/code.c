#include <stdio.h>
int main() 
{
    int a;
    int n;
    scanf("%d",&a);
    scanf("%d",&n);
    if (a>>n & 1){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}