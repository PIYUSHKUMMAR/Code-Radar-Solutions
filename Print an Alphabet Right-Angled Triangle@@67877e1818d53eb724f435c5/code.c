#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (char j='A';j<='A'+N;j++){
            printf("%c",j);
        }
    }
    return 0;
}