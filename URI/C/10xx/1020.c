#include <stdio.h>
#include <stdlib.h>

//problema 1020;

int main()
{
    int n;

    scanf("%d", &n);
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", n/365>0?n/365:0,(n%365)>0?(n%365)/30:0,(n%365)%30);
    
    return 0;
}