#include <stdio.h>

int main ( )
{
 int entero = 3 ;
 char c ;
 c = 'c' ;
 long long int m = 123987234129341234;
 unsigned char d = 32;
 float decimal = 0.123;
 printf("int \n\t valor = %d \n\t tamanyo %d \n\n", entero, sizeof(entero));
 printf("char \n\t valor= %c \n\t tamanyo %d \n\n", c , sizeof(char));
 printf("------ \n long long int\n\n valor= %lli \n\t tamanyo %d \n", m , sizeof(m));
 printf("------ \n unsigned char\n\n valor= %d \n\t tamanyo %d \n", d, sizeof(d));
 printf("------ \n float\n\n valor= %f \n\t tamanyo %d \n", decimal , sizeof(decimal));
 
}
