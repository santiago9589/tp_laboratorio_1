#include "biblioteca.h"

int VerificarNumero(char cadena[])
{
    int i;
    int retorno;

    for(i=0;i<strlen(cadena);i++)
    {
        if((!isdigit(cadena[i])))
        {
            retorno=0;
        }
        else
        {
            retorno=-1;
        }
    }

    return retorno;
}
void PedirCadena(char mensaje[],char* cadena)
{
    printf("%s",mensaje);
    scanf("%s",cadena);
}
float PedirFlotante(char mensaje[])
{
    float numero;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%f",&numero);

    return numero;
}

void ModificarMensaje(char cadena[],float numero,char texto[],char letra[],int numeroPosicion)
{
    sprintf(cadena,"%d.Ingresar %s operando (%s=%.2f)",numeroPosicion,texto,letra,numero);
}

void OperacionBasicas(float primerNumero,float segundoNumero,int Numero,float* resultado)
{
    float resultadoFuncion;

    switch(Numero)
    {
        case 1:
           resultadoFuncion=primerNumero+segundoNumero;
           *resultado=resultadoFuncion;
        break;
        case 2:
           if(primerNumero>segundoNumero)
           {
            resultadoFuncion=primerNumero-segundoNumero;
            *resultado=resultadoFuncion;
           }
           else
           {
               if(primerNumero<segundoNumero)
               {
                   resultadoFuncion=segundoNumero-primerNumero;
                   *resultado=resultadoFuncion;
               }
               else
               {
                  resultadoFuncion=0;
                  *resultado=resultadoFuncion;
               }

           }
        break;
        case 3:
        resultadoFuncion=primerNumero*segundoNumero;
        *resultado=resultadoFuncion;
        break;
        case 4:
            if(segundoNumero==0)
        {
            resultadoFuncion=-999;
            *resultado=resultadoFuncion;

        }
        else
        {
            resultadoFuncion=primerNumero/segundoNumero;
            *resultado=resultadoFuncion;
        }
        break;
    }
}

void InformarResultado(float primerNumero,float segundoNumero,float resultado,int numeroCase,int factorial1,int factorial2)
{
  switch(numeroCase)
  {
      case 1:
      printf("El resultado de %f+%f es: %f\n",primerNumero,segundoNumero,resultado);
      break;
      case 2:
      printf("El resultado de %f-%f es: %f\n",primerNumero,segundoNumero,resultado);
      break;
      case 3:
      if(segundoNumero!=0)
      {
      printf("El resultado de %f/%f es: %f\n",primerNumero,segundoNumero,resultado);
      }
      else
      {
        printf("No es posible dividir por cero\n");
      }
      break;
      case 4:
      printf("El resultado de %f*%f es: %f\n",primerNumero,segundoNumero,resultado);
      break;
      case 5:
      if(factorial1==-1 && factorial2==-1)
      {
          printf("los valores ingresados no permiten calcular el factorial");
      }
      else
      {
           if(factorial1!=-1)
           {
               printf("El factorial de %f es: %d y El factorial del segundo numero no se puede calcular\n",primerNumero,factorial1);
           }
           else
           {
               if(factorial2!=-1)
               {
                   printf("El factorial del primer numero no se puede calcular y El factorial de %f es: %d\n",segundoNumero,factorial2);
               }
               else
               {
                   printf("El factorial de %f es: %d y El factorial de %f es: %d\n",primerNumero,factorial1,segundoNumero,factorial2);
               }
           }
      }

      break;
    }

}


void factorial(float numero,int* factorial)
{
    int factorialFuncion;
    int Entero;
    int i;

    Entero=numero;

    if(numero-Entero)
    {
        factorialFuncion=-1;
        *factorial=factorialFuncion;
    }
    else
    {
        for(i=0;i<Entero;i++)
            {
                if(i==0)
                {
                    if(numero==0)
                    {
                        factorialFuncion=1;
                        *factorial=factorialFuncion;
                    }
                    else
                    {
                        factorialFuncion=Entero;
                        *factorial=factorialFuncion;
                    }
                }
                else
                {
                    factorialFuncion=factorialFuncion*i;
                    *factorial=factorialFuncion;
                }
            }
    }


}
