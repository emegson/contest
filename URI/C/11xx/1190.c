#include <stdio.h>

int main() {
    char c;
    int i,j;
    double s=0,M[12][12];
    scanf("%c",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
            if((11-i)<j&&j>i)
                s=s+M[i][j];
        }
    }
    if(c=='S'){
        printf("%.1lf\n",s);
    }else if(c=='M'){
        printf("%.1lf\n",s/30);
    }
    return 0;
}