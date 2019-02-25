#include <iostream> // std::cout 
#include <string.h> // string::copy
using namespace std;

bool isPalindro(string m, int t){
    bool p=1;
    int c;
    string beta;
    beta = m;
    for(c=0;c<t/2&&p==1;c++){
        if(m[c]==beta[t-c-1]){
            p=0;
        }
    }
    return p;
}

int main (){
    int a,b,tam,c,in,fi;
    bool pal = 0;
    string alfa;
    cin >> tam;
    cin >> alfa;
    for(a=0;a<tam-2;a++){
        for(b=tam-1; b>a;b--){
            pal = (isPalindro(alfa.substr(a,b-a+1) , b-a+1));
            cout << "pal - " <<pal << "\n(b-a) " << b-a << "\nb- " << b << "\na-" << a << "\n" << alfa.substr(a,b-1) << "\n"<< endl;
        }
        if(c<b-a&&pal==1){
            c=b-a;
            in=a;
            fi=b;
            cout << "in -"<< in<<"fi -" << fi<< "\n"<<alfa.substr(in,fi);
        }
    }
    
    cout << "in -"<< in<<" / fi -" << fi<< "\n"<<alfa.substr(in,fi);
    return 0;
}
