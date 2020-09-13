#include "Aritmeticas.h"
//FUNCION SUMA
/** \brief Esta función recibe dos números y los suma.
 * \param Primer número ingresado para realizar la operación.
 * \param Segundo número ingresado para realizar la operación.
 * \return Resultado de la suma.
 */
double Sumar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 + operando2;
    return resultado;
}

//FUNCION RESTA
/** \brief Esta función recibe dos números y los resta.
 * \param Primer número ingresado para realizar la operación.
 * \param Segundo número ingresado para realizar la operación.
 * \return Resultado de la resta.
 */
double Restar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 - operando2;
    return resultado;
}

//FUNCION DIVIDIR
/** \brief Esta función recibe dos números y los divide.
 * \param Primer número ingresado para realizar la operación.
 * \param Segundo número ingresado para realizar la operación.
 * \return Resultado de la división.
 */
double Dividir(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 / operando2;
    return resultado;
}

//FUNCION MULTIPLICAR
/** \brief Esta función recibe dos números y los multiplica.
 * \param Primer número ingresado para realizar la operación.
 * \param Segundo número ingresado para realizar la operación.
 * \return Resultado de la multiplicación.
 */
double Multiplicar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 * operando2;
    return resultado;
}

//FUNCION FACTORIAL
/** \brief Esta función realiza el factorial del parametro
 * \param Número a factorear.
 * \return Resultado del factorial.
 */
double Factorial (int numero)
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


