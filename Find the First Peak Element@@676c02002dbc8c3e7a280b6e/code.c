#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int flag=1,h=1;
    if (a[0]>a[1]){
        printf("%d",a[0]);
        h=0;
    }
    else{
    for(int j=0;j<N-1;j++){
        if (a[j] > a[j+1] & a[j-1]<a[j]){
            printf("%d",a[j]);
            flag=0;
            h=0;
            break;
        }
    }
    }
    
    if (flag){
        if (a[N-1]>a[N-2]){
        printf("%d",a[N-1]);
        h=0;
        }
    }
    if(h){
        printf("-1");
    }
    return 0;
}