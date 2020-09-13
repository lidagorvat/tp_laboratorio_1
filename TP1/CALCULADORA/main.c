#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Aritmeticas.h"

int main()
{
    int opcion;
    double operando1;
    double operando2;
    double resultadoSumar;
    double resultadoRestar;
    double resultadoDividir;
    double resultadoMultiplicar;
    double resultadoFactorialA;
    double resultadoFactorialB;

    //Este flag se utiliza para confirmar que se haya ingresado el primer operando.
    int flagOperando1=0;
    //Este flag se utiliza para confirmar que se haya ingresado el segundo operando.
    int flagOperando2=0;
    //Este flag se utiliza para comprobar que se hayan calculado los resultados y en su defecto mostrarlos.
    int flagResultados=0;

    do
    {
        //Se imprime el menú.
        printf("||CALCULADORA||");
        printf("\n1.Ingresar el primer operando (Operando A=%.2lf )",operando1);
        printf("\n2.Ingresar el segundo operando (Operando B=%.2lf )",operando2);
        printf("\n3.Realizar operaciones");
        printf("\n4.Informar resultados");
        printf("\n5.Salir\n");
        printf("Elija una opcion: ");
        if(scanf("%d", &opcion)==0) //Este if se utiliza para evitar que cuando se ingrese una opción invalida, el programa crashee.
        {
            printf("Error. Debe ingresar un numero valido. \n");
            printf("Cerrando...");
            exit(1);
        }

        switch(opcion)
        {
            //Se pide el primer operando
            case 1:
            printf("Ingrese el primer operando: ");
            //Nuevamente, en caso de ingresar una opción inválida, el programa se cierra para evitar errores.
            if(scanf("%lf",&operando1)==0)
                {
                    printf("Error. Debe ingresar un numero valido. \n");
                    printf("Cerrando...");
                    exit(1);
                }
            flagOperando1++; //Utilizo este flag para verificar que se haya ingresado el operando 1.
            flagResultados=0; // Esto se hace para evitar mostrar los resultados a menos que estos sean los de los últimos operandos ingresados.
            break;

            //Idem case 1 pero aplica al segundo operando
            case 2:
            printf("Ingrese el segundo operando: ");
            if(scanf("%lf",&operando2)==0)
                {
                    printf("Error. Debe ingresar un numero valido. \n");
                    printf("Cerrando...");
                    exit(1);
                }
            flagOperando2++;
            flagResultados=0;
            break;

            case 3:
            printf("Calculando...\n");
            if(flagOperando1==0||flagOperando2==0) //Validación. Se comprueba que se cargaron ambos operandos.
            {
                printf("Se deben ingresar los dos operandos para poder continuar\n");
            }
            else
                {
                    resultadoSumar=Sumar(operando1,operando2);
                    resultadoRestar=Restar(operando1,operando2);
                    //Con el siguiente if se verifica que el divisor no sea 0.
                    if(operando2!=0)
                    {
                    resultadoDividir=Dividir(operando1,operando2);
                    }
                    resultadoMultiplicar=Multiplicar(operando1,operando2);
                    //El if permite que se ingresen únicamente números positivos, caso contrario no se podrá calcular el factorial del número.
                    if(operando1>=0)
                    {
                    resultadoFactorialA=Factorial((int)operando1); //Convierto el parametro a entero ya que la función no puede calcular el factorial de un número con coma.
                    }
                    if(operando2>=0)
                    {
                    resultadoFactorialB=Factorial((int)operando2);
                    }
                    flagResultados=1; //Se confirma que se calcularon los resultados.
                }
            break;

            case 4:
            if(flagResultados==0) //Se confirma que se calcularon los resultados con los ÚLTIMOS parámetros ingresados.
            {
                printf("\nNo se han calculado los resultados\n");
            }
            else //Se muestran los resultados correspondientes
            {
               printf("\nResultados\n");
               printf("El resultado de %.2lf + %.2lf es: %.2lf\n",operando1,operando2,resultadoSumar);
               printf("El resultado de %.2lf - %.2lf es: %.2lf\n",operando1,operando2,resultadoRestar);
               if(operando2==0)
               {
                   printf("Error, no se puede dividir por cero\n");
               }
               else
               {
                   printf("El resultado de %.2lf / %.2lf es: %.2lf\n",operando1,operando2,resultadoDividir);
               }
               printf("El resultado de %.2lf * %.2lf es: %.2lf\n",operando1,operando2,resultadoMultiplicar);
               if(operando1<0)
               {
                   printf("No se puede calcular el factorial de %d porque es negativo.\n ",((int)operando1));
               }else
               {
                   printf("El factorial de %d es: %.2lf", ((int)operando1),resultadoFactorialA);
               }
               if(operando2<0)
               {
                   printf("\nNo se puede calcular el factorial de %d porque es negativo.\n ",((int)operando2));
               }
               else
               {
                printf(" y El factorial de %d es: %.2lf\n",((int)operando2),resultadoFactorialB);
               }
            }
            break;
        }

    }while(opcion!=5);

    return 0;
}



