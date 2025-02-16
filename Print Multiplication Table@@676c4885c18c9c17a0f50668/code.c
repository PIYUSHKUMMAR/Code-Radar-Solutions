#include <stdio.h>
int main()
    {
        int N,pf;
        scanf("%d",&N);
        for (int i=1;i<=10;i++){
            pf = N*i;
            printf("%d x %d = %d\n",N,i,pf);
        }
        return 0;
    }
