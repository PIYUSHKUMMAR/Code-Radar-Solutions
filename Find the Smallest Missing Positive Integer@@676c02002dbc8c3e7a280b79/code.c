#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for (int j=0;j<N-1;j++){
        for (int k=0;k<N-1;k++){
            if(a[k]>a[k+1]){
                int temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
                
            }
        }
    }
    int flag=1;
    for (int p=0;p<N-1;p++){
        if (a[p]+1 != a[p+1]){
            printf("%d",a[p]+1);
            flag=0;
            break;
        }
    }
    if (flag){
        printf("%d",a[n-1]+1);
    }
    return 0;
}