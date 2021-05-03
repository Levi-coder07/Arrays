#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

long long suma_iterativa(int *array,long long a){
    long long suma=0;
    for (int i= 0;i<a;i++){
        suma = suma + array[i];
    }
    return suma; 
}
long long suma_recursiva(int *array,long long a,long long b,long long suma){
    if(b==a){
        return suma;
    }else{
        suma = suma + array[b];
        suma_recursiva(array,a,b+1,suma);
    }
    
}   
int main(){
    long long a = 1000000;
    long long suma = 0;
    int *array = new int[a];
    srand(time(NULL));
    for (int i =0 ;i<a;i++){
        array[i]= rand()%10;
        cout<<array[i]<<" ";
    }
    cout<<"La suma de los elementos es: "<<suma_iterativa(array,a)<<endl;
    cout<<"La suma de los elementos es: "<<suma_recursiva(array,a,0,suma)<<endl;
    delete[] array;
    return 0;
}