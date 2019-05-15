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
	cin >> x >> oper >> y;

	Calculator calcular;
	while (true)
	{
		result = calcular.Calculate(x, oper, y);
		cout << "El resultado es: " << result << endl;
		break;
	}
	return 0;
}