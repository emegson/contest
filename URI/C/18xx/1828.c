#include <stdio.h>
#include <string.h>

int main(){
    int a,b,t,i=0;
    char pe[]="pedra", pa[]="papel", te[]="tesoura", sp[]="Spock", la[]="lagarto", s[10],r[10];
    scanf("%d",&t);
    while(i<t){
        scanf("%s %s",s,r);
        printf("Caso #%d: ",i+1); 
        if(0==strcmp(s,r)){
            printf("De novo!");
        }else if(0==strcmp(s,pe)){
            if(0==strcmp(r,la)||0==strcmp(r,te)){
                printf("Bazinga!");
            }else{
                printf("Raj trapaceou!");
            }
        }else if(0==strcmp(s,pa)){
            if(0==strcmp(r,pe)||0==strcmp(r,sp)){
                printf("Bazinga!");
            }else{
                printf("Raj trapaceou!");
            }
        }else if(0==strcmp(s,te)){
            if(0==strcmp(r,pa)||0==strcmp(r,la)){
                printf("Bazinga!");
            }else{
                printf("Raj trapaceou!");
            }
        }else if(0==strcmp(s,sp)){
            if(0==strcmp(r,te)||0==strcmp(r,pe)){
                printf("Bazinga!");
            }else{
                printf("Raj trapaceou!");
            }
        }else if(0==strcmp(s,la)){
            if(0==strcmp(r,pa)||0==strcmp(r,sp)){
                printf("Bazinga!");
            }else{
                printf("Raj trapaceou!");
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}