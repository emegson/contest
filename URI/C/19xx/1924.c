#include <stdio.h>
#include <string.h>

int main(){
    int i,n;
    char j1[100],j2[]="Ciencia da Computacao";
    scanf("%d",&n);
    while(i<n){
        scanf("%s",j1);
        i++;
    }
    printf("%s\n",j2);
    return 0;
}