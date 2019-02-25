#include <iostream>     // std::cout
#include <algorithm>    // std::sort
using namespace std;

void pares(int* m,int a){
    int i;
    for(i=0;i<a;i++){
        if(m[i]%2==0){
            cout << m[i] << " ";
        }
    }
    cout << endl;
}

void impares(int* m,int a){
    int i;
    for(i=a-1;i>-1;i--){
        if(m[i]%2!=0){
            cout << m[i] << " " ;
        }
    }
    cout << endl;
}


int main (){
    int *m,i,c;
    cin >> i;
    m=new int[i];
    for(c=0;c<i;c++){
        cin >> m[c];
    }
    sort (m,m+i);
    
    pares(m,i);
    impares(m,i);
    return 0;
}
