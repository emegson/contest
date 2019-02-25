#include <stdio.h>

int main() {
    int x,i=0,p=0,n=0;
    int impar[5],par[5];
    for(x=0;x<15;x++){
        scanf("%d",&n);
        if(n%2==0){
            par[p]=n;
            p++;
        }else{
            impar[i]=n;
            i++;
        }
        if(i==5){
            for(i=0;i<5;i++){
                printf("impar[%d] = %d\n",i,impar[i]);
            }
            i=0;
        }
        if(p==5){
            for(p=0;p<5;p++){
                printf("par[%d] = %d\n",p,par[p]);
            }
            p=0;
        }
    }
    for(x=0;x<i;x++){
        printf("impar[%d] = %d\n",x,impar[x]);
    }
    for(x=0;x<p;x++){
        printf("par[%d] = %d\n",x,par[x]);
    }
    return 0;
}