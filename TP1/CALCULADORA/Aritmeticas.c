#include "Aritmeticas.h"
//FUNCION SUMA
/** \brief Esta funci�n recibe dos n�meros y los suma.
 * \param Primer n�mero ingresado para realizar la operaci�n.
 * \param Segundo n�mero ingresado para realizar la operaci�n.
 * \return Resultado de la suma.
 */
double Sumar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 + operando2;
    return resultado;
}

//FUNCION RESTA
/** \brief Esta funci�n recibe dos n�meros y los resta.
 * \param Primer n�mero ingresado para realizar la operaci�n.
 * \param Segundo n�mero ingresado para realizar la operaci�n.
 * \return Resultado de la resta.
 */
double Restar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 - operando2;
    return resultado;
}

//FUNCION DIVIDIR
/** \brief Esta funci�n recibe dos n�meros y los divide.
 * \param Primer n�mero ingresado para realizar la operaci�n.
 * \param Segundo n�mero ingresado para realizar la operaci�n.
 * \return Resultado de la divisi�n.
 */
double Dividir(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 / operando2;
    return resultado;
}

//FUNCION MULTIPLICAR
/** \brief Esta funci�n recibe dos n�meros y los multiplica.
 * \param Primer n�mero ingresado para realizar la operaci�n.
 * \param Segundo n�mero ingresado para realizar la operaci�n.
 * \return Resultado de la multiplicaci�n.
 */
double Multiplicar(double operando1,double operando2)
{
    double resultado;
    resultado = operando1 * operando2;
    return resultado;
}

//FUNCION FACTORIAL
/** \brief Esta funci�n realiza el factorial del parametro
 * \param N�mero a factorear.
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


