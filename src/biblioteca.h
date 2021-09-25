
#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/// @fn int VerificarNumero(char[])
/// @brief Verifica el numero ingresado como char, lo ingreso como char para poder validad que no sea decimal o letras. solo numeros.
///
/// @pre
/// @post
/// @param la cadena de char que ingresa el usuario
/// @return un valor entre 1 o 0 depende el resultado de la validacion.
int VerificarNumero(char[]);
/// @fn void PedirCadena(char[], char[])
/// @brief Pido el numero en forma de char.
///
/// @pre
/// @post
/// @param ingreso un mensaje de lo que se quiere pedir.
/// @param la cadena donde quiero guardar la informacion ingresada por el usuario
void PedirCadena(char[],char[]);
/// @fn void factorial(float, int*)
/// @brief calculo el factorial de un numero, si lo puede hacer.
///
/// @pre
/// @post
/// @param numero ingresado por el usuario
/// @param resultado de la operacion realizada.
void factorial(float,int*);
/// @fn float PedirFlotante(char[])
/// @brief pide un numero flotante al usuario
///
/// @pre
/// @post
/// @param un mensaje con la solicitud al usuario
/// @return el numero flotante ingresado por el usuario
float PedirFlotante(char[]);
/// @fn void ModificarMensaje(char[], float, char[], char[], int)
/// @brief modifica una cadena de texto
///
/// @pre
/// @post
/// @param cadena de texto construida con informacion ingresada.
/// @param numero ingresado por el usuario.
/// @param una cadena de texto que dice si es el primer o segundo.
/// @param cadena de texto que simboliza si es el numero A o B
/// @param un numero que dice si es el primer o segundo.
void ModificarMensaje(char[],float,char[],char[],int);
/// @fn void OperacionBasicas(float, float, int, float*)
/// @brief calculo de las 4 operaciones basicas de la matematica
///
/// @pre
/// @post
/// @param numero ingresado por el usuario
/// @param numero ingresado por el usuario
/// @param numero utilizado para dirigir el switch de la funcion
/// @param resultado de las operaciones
void OperacionBasicas(float,float,int,float*);
/// @fn void InformarResultado(float, float, float, int, int, int)
/// @brief informa de los resultados de las operaciones hechas
///
/// @pre
/// @post
/// @param numero ingresado por el usuario
/// @param numero ingresado por el usuario
/// @param resultado de las operaciones basicas
/// @param numero ingresado por el usuario para el calculo factorial
/// @param numero ingresado por el usuario para el calculo factorial
/// @param resultado del factorial
void InformarResultado(float,float,float,int,int,int);


#endif /* BIBLIOTECA_H_ */
