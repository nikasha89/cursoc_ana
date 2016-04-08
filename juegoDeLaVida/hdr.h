#include <stdio.h>

/* Tamaño del array regular bidimensaional */
#define TAM_ARRAY 50
/* Número de iteraciones */
#define ITERACION 60
/* Lindantes se refiere a las 8 células lindantes que tiene cada una como máximo. */
#define LINDANTES 8

enum estado_celula{
	VIVA, 
	MUERTA
} EstadoCelula;

struct celula{
	enum estado_celula estado = MUERTA;
} Celula;

struct coordenadas{
	int x;
	int y;
} Coordenadas;

struct tablero{
	struct celula tablero[TAM_ARRAY][TAM_ARRAY];
	int iteracion=0;
	struct celula tablero_inicial[TAM_ARRAY][TAM_ARRAY];
	struct coordenadas arrayCelulasVivas[TAM_ARRAY*TAM_ARRAY];
	struct coordenadas arrayCelulasNacen[TAM_ARRAY*TAM_ARRAY];
	struct coordenadas arrayCelulasMueren[TAM_ARRAY*TAM_ARRAY];
} Tablero;

int menuInicio();
void iterarTablero(struct tablero **t);
void imprimeTablero(struct tablero **t);
void inicializarTablero(struct tablero **t);
