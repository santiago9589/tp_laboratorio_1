/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(void) { // inicio del main
	  char opcion[255];
	  int resultado;
	  int opcionEntero;
	  float primerNumero=5.4;
	  float segundoNumero=2.88;
	  char mensajeEntrada1[255]="1.Ingresar 1er operando (A=x)";
	  char mensajeEntrada2[255]="2.Ingresar 2do operando (B=y)";
	  float SumaDeValores;
	  float RestaDeValores;
	  float MultiplicacionDeValores;
	  float DivisionDeValores;
	  int FactorialMainA;
	  int FactorialMainB;

	   do{ // inicio del bucle
	      printf("%s\n",mensajeEntrada1);
	      printf("%s\n",mensajeEntrada2);
	      printf("3.calcular todas las operaciones\n");
	      printf("4.mostra resultados\n");

	      PedirCadena("ingrese opcion:\n",opcion);
	      resultado=VerificarNumero(opcion);
	      opcionEntero=atoi(opcion);

	        switch(opcionEntero)// programar respuestas
	        { // inicio
	          case 1:
	            primerNumero=PedirFlotante("Ingrese primer numero: \n");
	            ModificarMensaje(mensajeEntrada1,primerNumero,"1er","A",1);
	          break;
	          case 2:
	            segundoNumero=PedirFlotante("Ingrese segundo numero: \n");
	            ModificarMensaje(mensajeEntrada2,segundoNumero,"2do","B",2);
	          break;
	          case 3:
	          OperacionBasicas(primerNumero,segundoNumero,1,&SumaDeValores);
	          OperacionBasicas(primerNumero,segundoNumero,2,&RestaDeValores);
	          OperacionBasicas(primerNumero,segundoNumero,3,&MultiplicacionDeValores);
	          OperacionBasicas(primerNumero,segundoNumero,4,&DivisionDeValores);
	          factorial(primerNumero,&FactorialMainA);
	          factorial(segundoNumero,&FactorialMainB);
	          break;
	          case 4:
	          InformarResultado(primerNumero,segundoNumero,SumaDeValores,1,0,0);
	          InformarResultado(primerNumero,segundoNumero,RestaDeValores,2,0,0);
	          InformarResultado(primerNumero,segundoNumero,DivisionDeValores,3,0,0);
	          InformarResultado(primerNumero,segundoNumero,MultiplicacionDeValores,4,0,0);
	          InformarResultado(primerNumero,segundoNumero,0,5,FactorialMainA,FactorialMainB);
	          break;
	        }// fin

	    }while(opcionEntero!=5 && resultado!=1); // fin del bucle

	return EXIT_SUCCESS;
} // fin del main
