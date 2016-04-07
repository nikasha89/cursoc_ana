#include <stdio.h>

#define TAM_ARRAY 50
#define ITERACION 60

enum estado_celula{
	VIVA, 
	MUERTA
} EstadoCelula;

struct celula{
	EstadoCelula estado = MUERTA;
} Celula;

struct tablero{
	Celula tablero[TAM_ARRAY][TAM_ARRAY];
	int iteracion=0;
	Celula tablero_inicial[TAM_ARRAY][TAM_ARRAY];
} Tablero;

int menuInicio();
void iterarTablero(Tablero **t);
void imprimeTablero(Tablero **t);
void inicializarTablero(Tablero **t);