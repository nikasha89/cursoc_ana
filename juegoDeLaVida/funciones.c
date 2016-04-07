#include "hdr.h"

//Comienza el juego preguntando el número de células de las que partir:
int menuInicio()
{
	int num=0;
	printf("Escoge un número entre 3 y 2400: \n");
	scanf("%d",num);
	return num;
}

//Inicializa el tablero con el número de células indicado por el usuario:
void inicializarTablero(Tablero **t, int numCelulas)
{
	for(int i=0;i< numCelulas;i++)
	{ 
		/* Para obtener un número aleatorio:
		numero = rand () % (N-M+1) + M;   // Este está entre M y N 
		En nuestro caso: Entre 0 y 49 Para obtener dos coordenadas del tablero
		donde introducir las células vivas: */
		
		int x= rand() %  50;
		int y= rand() %  50;

		t->tablero[x][y]-> estado = VIVA;
		t->tablero_inicial[x][y]-> estado = VIVA;
	}
}

//Realiza la comprobación de las células vivas/muertas para la siguiente iteración:
void iterarTablero(Tablero **t)
{	
	for(int i=0;i<TAM_ARRAY;i++){
		for(int j=0;j<TAM_ARRAY;j++){
			t[i][j];
		}
	}	
}