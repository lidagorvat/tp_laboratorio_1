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

    int flagOperando1=0;
    int flagOperando2=0;

    do
    {
        printf("||CALCULADORA||");
        printf("\n1.Ingresar el primer operando (Operando A=%.2lf )",operando1);
        printf("\n2.Ingresar el segundo operando (Operando B=%.2lf )",operando2);
        printf("\n3.Realizar operaciones");
        printf("\n4.Informar resultados");
        printf("\n5.Salir\n");
        printf("Elija una opcion: ");
        scanf ("%d", &opcion);

        switch(opcion)
        {
            case 1:
            printf("Ingrese el primer operando: ");
            scanf("%lf",&operando1);
            flagOperando1++;
            break;

            case 2:
            printf("Ingrese el segundo operando: ");
            scanf("%lf", &operando2);
            flagOperando2++;
            break;

            case 3:
            printf("Calculando...\n");
            if(flagOperando1==0||flagOperando2==0)
            {
                printf("Se deben ingresar los dos operandos para poder continuar");
            }
            resultadoSumar=Sumar(operando1,operando2);
            resultadoRestar=Restar(operando1,operando2);
            resultadoDividir=Dividir(operando1,operando2);
            resultadoMultiplicar=Multiplicar(operando1,operando2);
            resultadoFactorialA=Factorial(operando1);
            resultadoFactorialB=Factorial(operando2);
            break;

            case 4:
            printf("Resultados\n");
            printf("El resultado de %.2lf + %.2lf es: %.2lf\n",operando1,operando2,resultadoSumar);
            printf("El resultado de %.2lf - %.2lf es: %.2lf\n",operando1,operando2,resultadoRestar);
            printf("El resultado de %.2lf / %.2lf es: %.2lf\n",operando1,operando2,resultadoDividir);
            printf("El resultado de %.2lf * %.2lf es: %.2lf\n",operando1,operando2,resultadoMultiplicar);
            printf("El factorial de %.2lf es: %.2lf y El factorial de %.2lf es: %.2lf\n",operando1,resultadoFactorialA,operando2,resultadoFactorialB);
            break;
        }

    }while(opcion!=5);

    return 0;
}



