/*
 * utn_tp_laboratorio_1.c
 *
 *  Created on: 4 sep. 2019
 *      Author: Mati
 */
#include <stdio.h>
#include <stdlib.h>

int menu()
{
	int opcion;
	printf("\nMenu de opciones\n ");
	printf("\n1- Ingrese un numero: ");
	printf("\n2- Ingrese otro numero: ");
	printf("\n3- Calcular todas las operaciones: ");
	printf("\n4- Informar los resultados de todas las operaciones: ");
	printf("\n5- Salir");
	printf("\n\nIngrese una operacion a realizar: ");
	scanf("%d", &opcion);
	return opcion;
}

// funcion operacion suma
// parametro1 numeroA
// parametro2 numeroB
// retorna la suma de los numeroA + numeroB
int operacionSuma(float numeroA, float numeroB, float *pResultado)
{
	float resultado;
	resultado = numeroA + numeroB;
	*pResultado = resultado;
	return 0;
}

// funcion operacion resta
// parametro1 numeroA
// parametro2 numeroB
// retorna la resta de los numeroA - numeroB
int operacionResta(float numeroA, float numeroB, float *pResultado)
{
	float resultado;
	resultado = numeroA - numeroB;
	*pResultado = resultado;
	return 0;
}

// funcion operacion division
// parametro1 numeroA
// parametro2 numeroB
// retorna la division de los numeroA / numeroB
int operacionDivision(float numeroA, float numeroB, float *pResultado)
{
	float resultado;
	if(numeroB == 0)
	{
		resultado = -1;
	}
	else
	{
		resultado = numeroA / numeroB;
		*pResultado = resultado;
	}
	return 0;
}

// funcion operacion multiplicacion
// parametro1 numeroA
// parametro2 numeroB
// retorna el producto de los numeroA * numeroB
int operacionMultiplicacion(float numeroA, float numeroB, float *pResultado)
{
	float resultado;
	resultado = numeroA * numeroB;
	*pResultado = resultado;
	return 0;
}

int operacionFactorial (float numero, float *pResultado)
{
	float resultado = 1;
	int i;
	for(i=1; i<numero; i++)
	{
			resultado = resultado*i;
			*pResultado = resultado;
	}
	return 0;
}
