#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        for (char j='A';j<='A'+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}