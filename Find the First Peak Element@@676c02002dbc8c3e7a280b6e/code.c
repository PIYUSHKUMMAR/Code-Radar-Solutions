#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int j=1;j<N-2;j++){
        if (a[j] > (a[j-1] & a[j+1])){
            printf("%d",a[j]);
            break;
        }
    }
    return 0;
}