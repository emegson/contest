#include <stdio.h>
int main()
{
    int a,b,c,i,N,p,q;
    scanf("%d", &N);
    while(N!=0){
        p=0;q=0;
        int ara[N][N];
        i=N;
        for(c=1; c<=(N/2)+1; c++)
        {
            for(a=p; a<i; a++)
            {
                for(b=q; b<i; b++)
                    ara[a][b]=c;
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