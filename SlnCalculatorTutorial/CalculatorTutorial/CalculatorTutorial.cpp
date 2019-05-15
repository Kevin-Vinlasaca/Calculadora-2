#include "pch.h"
#include "Calculator.h"
#include <iostream>

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '\0';
	cout << "--- Calculadora de consola ---" << endl << endl;
	cout << "Ingrese la operación a realizar. Formato: a+b | a-b | a*b | a/b"
		<< endl;
	
	Calculator calcular;
	while (true)
	{
		cin >> x >> oper >> y;
		result = calcular.Calculate(x, oper, y);
		cout << "El resultado es: " << result << endl;
	}
	return 0;
}