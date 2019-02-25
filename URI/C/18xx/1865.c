#include <stdio.h>
#include <string.h>

int main(){
    int a,n,i=0;
    char thor[]="Thor",nome[50];
    scanf("%d",&a);
    while(i<a){
        scanf("%s",nome);
        scanf("%d",&n);
        if(0==strcmp(thor,nome)){
            printf("Y");
        }else{
            printf("N");
        }
        printf("\n");
        i++;
    }
    return 0;
}