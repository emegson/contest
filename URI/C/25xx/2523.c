#include <stdio.h>
#include <string.h>

int main(){
    char alfa[26];
    int n, i, b;
    while(scanf("%s", alfa)!=EOF){
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &b);
            printf("%c",alfa[b-1]);
        }
        printf("\n");
    }
    return 0;
}
