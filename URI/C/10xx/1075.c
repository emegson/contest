#include <stdio.h>

int main() {
    int n,c;
    c=0;
    scanf("%d", &n);
    while(c<10001){
        c++;
        if(c%n==2){
            printf("%d\n",c);
        }
    };
    return 0;
}