#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t=0;
    char *p;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        p= (char*) malloc(5* sizeof (char*));
        scanf("%s", p);
        if(p[0]=='o'){
            if(p[1]=='n'||p[2]=='e'){
                printf("%s", "1");
                t=1;
            }
        }
        if(p[1]=='n'&&t!=1){
            if(p[0]=='o'||p[2]=='e'){
                printf("%s", "1");
                t=1;
            }
        }
        if(p[2]=='e'&&t!=1){
            if(p[0]=='o'||p[1]=='n'){
                printf("%s", "1");
                t=1;
            }
        }
        if(p[0]=='t'&&t!=1){
            if(p[1]=='w'||p[2]=='o'){
                printf("%s", "2");
                t=1;
            }
        }
        if(p[1]=='w'&&t!=1){
            if(p[0]=='t'||p[2]=='o'){
                printf("%s", "2");
                t=1;
            }
        }
        if(p[2]=='o'&&t!=1){
            if(p[0]=='t'||p[1]=='w'){
                printf("%s", "2");
                t=1;
            }
        }
        if(t!=1){
                printf("%s", "3");
        }
        t=0;
        printf("\n");
        free(p);
    }
    return 0;
}