#include <stdio.h>
#define TAM 5
int main(){
 int a[TAM]={1,2,3,4,5};
 float c[TAM];
 float b[TAM]={1.1,2.2,3.3,4.4,5.5};
 int *p_ent=a;
 float *p_char=b;

//Forma 1 para imprimir ambos vectores:
for(int i=0; i<TAM ; i++){
printf("a[%d]=%d ; b[%d]=%f \n", i, a[i],i, b[i]);
}

}
