#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (char j='A';j<='A'+N-1;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}