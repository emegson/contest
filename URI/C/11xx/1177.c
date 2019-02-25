#include <stdio.h>

int main() {
    int i,v[1000],n;
    scanf("%d",&n);
    v[i]=0;
    for(i=1;i<1000;i++){
        v[i]=v[i-1]+1;
        if(v[i]>n-1){
            v[i]=0;
        }
    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,v[i]);
    }
    return 0;
}