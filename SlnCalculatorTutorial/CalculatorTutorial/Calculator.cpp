#include "pch.h"
#include "Calculator.h"
#include<stdio.h>

/*Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}*/

double Calculator::Calculate(double x, char oper, double y)
{
	double resultado = 0.0;
	switch (oper)
	{
	case'+':
		resultado = x + y;
		return resultado;
	case'-':
		resultado = x - y;
		return resultado;
	case'*':
		resultado = x * y;
		return resultado;
	case'/':
		resultado = x / y;
		return resultado;
	default:
		printf("%s", "Error\n");
	}
	return 0.0;
}
