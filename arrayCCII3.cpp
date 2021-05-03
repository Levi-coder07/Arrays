#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


int ascendente(int *array, int tam) {//insertion sort
   int key, j;
   for(int i = 1; i<tam; i++) {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insertar en el lugar correcto
   }
   return *array;
}
int main(){
    long long a = 1000000;
    int *array = new int[a];
    srand(time(NULL));
    for (int i =0 ;i<a;i++){
        array[i]= rand()%10;
        cout<<array[i]<<" ";
    }
    cout<<"Los numeros ordenados ascendente seran: "<<endl;
    *array = ascendente(array,a);
    for (int i =0;i<a;i++){
        cout<<array[i]<<" ";
    }
    delete[] array;
    return 0;
}