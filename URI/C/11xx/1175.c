#include <stdio.h>

int main() {
    int i,v[20],d;
    
    for(i=0;i<20;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<20/2;i++){
        d=v[i];
        v[i]=v[19-i];
        v[19-i]=d;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n", i,v[i]);
    }
    return 0;
}