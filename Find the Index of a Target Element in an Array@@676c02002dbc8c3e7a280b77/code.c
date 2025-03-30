#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    a[N];
    for (int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int T;
    scanf("%d",&T);
    int flag =1;
    for (int j=0;j<N;j++){
        if (a[j]==T){
            printf("%d",j);
            flag=0;
            break;
        }
    }
    if(flag){
        printf("-1");
    }
    return 0;
}