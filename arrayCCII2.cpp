#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int invertir_iterativa(int *array,long long a){
    int b=a;
    int aux;
    for (int i = 0;i<=a/2;i++){
       aux=array[i];
       array[i]=array[b-1];
       array[b-1]=aux;
       b--;
    }
    return *array; 
}
int invertir_recursiva(int *array,long long a,long long i){
    int aux;
    if(i==a/2){
        
        return *array;
    }else{
       aux=array[i];
       array[i]=array[a-i];
       array[a-i]=aux;
       //cout<<array[i]<<" ";
       invertir_recursiva(array,a,i+1);
    }
    
}   
int main(){
    int aux=0;

    long long a = 5;
    int *array = new int[a];
     srand(time(NULL));
    for (int i =0 ;i<a;i++){
        array[i]= rand()%10;
        cout<<array[i]<<" ";
    }
    cout<<"El array invertido sera: "<<endl;
    *array = invertir_iterativa(array,a);
    for (int i =0;i<a;i++){
        cout<<array[i]<<" ";
    }
    cout<<"El array invertido sera: "<<endl;
    *array = invertir_recursiva(array,a-1,0);
    for (int i =0;i<a;i++){
        cout<<array[i]<<" ";
    }

    delete[] array;
    return 0;
}