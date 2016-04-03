#include <stdio.h>

int main(){
int a=10;
char b='c';
int *p_ent=&a;
char *p_char=&b;
*p_ent=54;
printf("b = %c, a=%d \n",*p_char,*p_ent);
}
