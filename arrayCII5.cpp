#include <iostream>
using namespace std;

void concatenar(char a[],char b[],int e,int d){
    for (int i = 0 ; i<d;i++){
        b[(e-d)+i]=a[i];
        
    }
    cout<<b;
}


int main(){
    char b[16] = "computacion    ";
    char a[5] = "hola";
    cout<<"La cadena concatenada es : "<<endl; 
    
    //cout<<a;
    concatenar(a,b,sizeof(b),sizeof(a));
    return 0;
}