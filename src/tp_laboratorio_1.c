/*
 ============================================================================
 Name        : tp_laboratorio_1.c
 Author      : MatiasCaleca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_tp_laboratorio_1.h"


int main(void)
{
		int opciones;
		int continuar = 1;
		float numeroA;
		float numeroB;
		float resultadoSuma;
		float resultadoResta;
		float resultadoDivision;
		float resultadoMultiplicacion;
		float resultadoFactorialA;
		float resultadoFactorialB;

		while(continuar == 1)
		{
			opciones = menu();
			switch (opciones)
			{
				// pido numeros y guardo sus datos
				case 1:
					printf ("\nIngrese un numero: ");
					scanf ("%f", &numeroA);
					system("cls");
					break;
				case 2:
					printf ("\n Ingrese otro numero: ");
					scanf ("%f", &numeroB);
					system("cls");
					break;
				// se ejecuta cada funcion de la calculadora guardadas en la biblioteca
				case 3:
					operacionSuma(numeroA,numeroB,&resultadoSuma);
					operacionResta(numeroA,numeroB,&resultadoResta);
					operacionDivision(numeroA,numeroB,&resultadoDivision);
					operacionMultiplicacion(numeroA,numeroB,&resultadoMultiplicacion);
					operacionFactorial(numeroA,&resultadoFactorialA);
					operacionFactorial(numeroB,&resultadoFactorialB);
					system("cls");
					break;
				// informo mediante pintf los resultados de cada operacion
				case 4:
					printf("\nEl resultado de la suma es: %f", resultadoSuma);
					printf("\nEl resultado de la resta es: %f", resultadoResta);

					if(resultadoDivision == -1)
					{
						printf("\nError. No se puede dividir por 0");
					}
					else
					{
						printf("\nResultado de la division es: %f", resultadoDivision);
					}
					printf("\nEl resultado de la multiplicacion es: %f", resultadoMultiplicacion);
					printf("\nEl factorial del numero %f es %f", numeroA, resultadoFactorialA);
					printf("\nEl factorial del numero %f es %f", numeroB, resultadoFactorialB);
					break;
				// fin del progrma/calculadora
				case 5:
					printf("\nExit/Salir");
					continuar = 0;
					break;
				default:
					printf("\nError, El numero ingresado no es correcto ");
			}
		}
		return 0;
}

