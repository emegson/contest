#include <stdio.h>
int main(){
    int n,i,b,v;
    while(scanf("%d",&n)!=EOF){
        for(b=0,i=0;b<n;b++){
            scanf("%d",&v);
            if(v>i){
                i=v;
            }
        }
        if(i<10){
            printf("1\n");
        }else if(i<20){
            printf("2\n");
        }else{
            printf("3\n");
        }
    }
    return 0;
}