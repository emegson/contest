#include <stdio.h>

int main() {
    int v[10],i;
    scanf("%d",&v[0]);
    for(i=1;i<10;i++){
        v[i]=v[i-1]*2;
    }
    
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n", i,v[i]);
    }
    return 0;
}