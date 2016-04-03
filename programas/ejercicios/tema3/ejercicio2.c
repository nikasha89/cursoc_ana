#include <stdio.h>

#define TAM_ARRAY 10

int main(){
int array[TAM_ARRAY]={1,2,3,4,5,6,7,8,9,10};
printf("Recorrido normal del array:\n\n");
//Recorrer array e imprimirlo:
for(int i=0;i<TAM_ARRAY; i++){
printf("Elemento %d valor= %d\n",i,array[i]);
}
printf("\nRecorrido inverso de los elementos pares del array \n\n");
//Orden inverso pares(entendiendo por pares 0,2,4..):
for(int j=TAM_ARRAY-2;j>=0; j=j-2){
printf("Elemento %d valor= %d\n",j,array[j]);
}

}
