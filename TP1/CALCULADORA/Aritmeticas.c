#include "Aritmeticas.h"

//FUNCION SUMA
double Sumar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 + operando2;
    return resultado;
}

//FUNCION RESTA
double Restar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 - operando2;
    return resultado;
}

//FUNCION DIVIDIR
double Dividir(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 / operando2;
    return resultado;
}

//FUNCION MULTIPLICAR
double Multiplicar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 * operando2;
    return resultado;
}

//FUNCION FACTORIAL
double Factorial (double numero)
{
    double resultado;
    if (numero == 0)
        {
            resultado = 1;
        }
        else
            {
                resultado = numero * Factorial (numero - 1);
            }
            return resultado;
}


