#include <iostream>
using namespace std;

int size_cadena_iterativo(char cadena[]){
    int cantidad=0;
    for ( int i = 0; cadena[i]!='\0';i++){
        cantidad = cantidad +1;
    }
       
    return cantidad;
}
int size_cadena_recursivo(char cadena[],int i){
    if (cadena[i]=='\0'){
        return i;
    }else{
        size_cadena_recursivo(cadena,i+1);
    }
    
}
int main(){
    char cadena[] = "computacionnsnn";
    int cantidad = size_cadena_iterativo(cadena);
    cout<<"La longitud de la cadena es : "<<cantidad<<endl; 
    cantidad = size_cadena_recursivo(cadena,0);
    cout<<"La longitud de la cadena es : "<<cantidad<<endl; 
    return 0;
}