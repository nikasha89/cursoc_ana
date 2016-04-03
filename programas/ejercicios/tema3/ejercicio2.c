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

//Cambiar Elemento i por el i+1 (y el último por el primero):
printf("\nCambiar Elemento i por el i+1 (y el último por el primero)\n");
int intercambio;
for(int k=TAM_ARRAY-1;k>=0;k--){
if(k!=0){
 printf("array[k-1]= %d\n",array[k-1]);
 intercambio=array[k-1];
 array[k-1]=array[k];
}else{
 array[k]=intercambio;
}
}

}
