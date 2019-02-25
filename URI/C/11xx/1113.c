#include <stdio.h>

int main() {
    int a,b,t;
    t=1;
    while(t){
        scanf("%d %d", &a,&b);
        if(a>b){
            printf("Decrescente\n");
        }else if(b>a){
            printf("Crescente\n");
        }else{
            t=0;
        }
    };
    return 0;
}