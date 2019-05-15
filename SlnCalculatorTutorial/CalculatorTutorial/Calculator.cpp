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
	double resultado;
	switch (oper)
	{
	case'+':
		resultado = x + y;
		break;
	case'-':
		resultado = x - y;
		break;
	case'*':
		resultado = x * y;
		break;
	case'/':
		resultado = x / y;
		break;
	default:
		printf("%s", "Error");
		break;
	}
	return resultado;
	return 0.0;
}
