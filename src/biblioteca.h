
#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int VerificarNumero(char[]);
void PedirCadena(char[],char[]);
void factorial(float numero,int* factorial);

float PedirFlotante(char[]);
void ModificarMensaje(char[],float,char[],char[],int);

void OperacionBasicas(float,float,int,float*);
void InformarResultado(float,float,float,int,int,int);


#endif /* BIBLIOTECA_H_ */
