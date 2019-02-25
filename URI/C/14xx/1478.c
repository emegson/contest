#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,i,N,p,q,r;
    scanf("%d", &N);
    while(N!=0){
        p=0;q=0;
        int ara[N][N];
        i=N;
        if(N%2==0)
            r=N/2;
        else if(N%2==1)
            r=(N/2)+1;
        for(c=1; c<=r; c++)
        {
            for(a=p; a<i; a++)
            {
                for(b=q; b<i; b++)
                        ara[a][b]=abs(a-b)+1;
            }
            p++; q++; i--;
        }
        for(b=0; b<N; b++)
        {
            for(a=0; a<N; a++)
            {
                if(a==0)
                    printf("%3d",ara[a][b]);
                else printf(" %3d",ara[a][b]);
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &N);
    }
    return 0;
}