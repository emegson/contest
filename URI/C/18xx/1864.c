#include <stdio.h>
#include <string.h>

int main(){
    int a,i=0;
    char frase[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&a);
    while(i<a&&i<34){
        printf("%c",frase[i]); 
        i++;
    }
    printf("\n");
    return 0;
}