#include <stdio.h>
int main() 
{
    int n;
    int a;
    scanf("%d",&n);
    scanf("%d",&a);
    if (n<<(a-1)){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}