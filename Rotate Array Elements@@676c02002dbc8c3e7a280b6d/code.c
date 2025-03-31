#include <stdio.h>
void rotateright(int a[],int N,int K){
    int temp[K];
    for (int i=0;i<K;i++){
        temp[i]=temp[N-K+i];
    }
    for (int j=N-1;j>=K;j--){
        a[j]=a[j-K];
    }
    for (int g=0;g<K;g++){
        a[g]=temp[g];
    }
}
int main()
{
    int N,K;
    scanf("%d",&N);
    int a[N];
    for (int i=0;i<N;i++){
        scanf("%d",&N);
    }
    scanf("%d",&K);
    rotateright(a,N,K);
    for (int j=0;j<N;j++){
        printf("%d",a[j]);
    }
    return 0;
}