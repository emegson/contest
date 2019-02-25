#include <stdio.h>

int main() {
    int i;
    double v[100];
    
    for(i=0;i<100;i++){
        scanf("%lf",&v[i]);
    }
    
    for(i=0;i<100;i++){
        if(v[i]<=10){
            printf("A[%d] = %.1lf\n", i,v[i]);
        }
    }
    return 0;
}