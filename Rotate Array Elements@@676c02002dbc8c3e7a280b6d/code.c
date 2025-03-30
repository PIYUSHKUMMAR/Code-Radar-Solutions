#include <stdio.h>
int main()
{
    int N,K;
    scanf("%d",&N);
    int a[N+K];
    for (int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for (int j=N-1; j>=0; j--){
        a[j] =a[j+2];
    }
    for (int p=0;p<K;p++){
        a[p] = a[N+p];
    }
    for (int w=0;w<N+K;w++){
        printf("%d\n",a[w]);
    }
    return 0;
}