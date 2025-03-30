#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N];
    for (int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int odd=0,even=0;
    for(int j=0;j<N;j++){
        if(a[j]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}