#include "Racional.h"
#include <iostream>
#include <string>

Racional::Racional(int num1,
	int num2,
	int num3,
	int num4):
	a(num1), b(num2), c(num3), d(num4)
{
}
// funcion Helper, para sacar el maximo comun divisor
// haciendo uso del algoritmo de euclides 

int mcd(int m, int n)
{
	int r = 1000;

	while (r != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return(m);
}
std::string Racional::sumaDeFracciones(){
	numerador = ((a*d) + (b*c));
	denominador = (b*d);
	if (numerador%denominador == 0) {
		std::cout << "El resultado de la suma es: " << numerador/denominador << std::endl;
		return std::to_string(numerador / denominador);
	}
	else {
		int maximoDivisor = mcd(numerador, denominador);
		std::cout << "El resultado de la suma es: " << numerador/maximoDivisor << " / ";
		std::cout << denominador/ maximoDivisor << std::endl;
	}
	return (char(a)+"/"+char(b));
}
std::string Racional::restaDeFracciones() {
	numerador = ((a*d) - (b*c));
	denominador = (b*d);
	if (numerador%denominador == 0) {
		std::cout << "El resultado de la resta es: " << numerador / denominador << std::endl;
		return std::to_string(numerador / denominador);
	}
	else {
		int maximoDivisor = mcd(numerador, denominador);
		std::cout << "El resultado de la resta es: " << numerador/ maximoDivisor << " / ";
		std::cout << denominador/ maximoDivisor << std::endl;
	}
	return (char(numerador) + "/" + char(denominador));
}
std::string Racional::divisionDeFracciones() {
	numerador = (a*d);
	denominador = (b*c);
	if (numerador%denominador == 0) {
		std::cout << "El resultado de la division es: " << numerador / denominador << std::endl;
		return std::to_string(numerador / denominador);
	}
	else {
		int maximoDivisor = mcd(numerador, denominador);
		std::cout << "El resultado de la division es: " << numerador/ maximoDivisor << " / ";
		std::cout << denominador/ maximoDivisor << std::endl;
	}
	return (char(numerador) + "/" + char(denominador));
}
std::string Racional::multiplicacionDeFracciones() {
	numerador = (a*c);
	denominador = (b*d);
	if (numerador%denominador == 0) {
		std::cout << "El resultado de la division es: " << numerador / denominador << std::endl;
		return std::to_string(numerador / denominador);
	}
	else {
		int maximoDivisor = mcd(numerador, denominador);
		std::cout << "El resultado de la division es: " << numerador/ maximoDivisor << " / ";
		std::cout << denominador / maximoDivisor << std::endl;
	}
	return (char(numerador) + "/" + char(denominador));
}
std::string Racional::eleverFraccion() {
	numerador = a * a;
	denominador = b * b;
	if (numerador%denominador == 0) {
		std::cout << "El resultado de la elevar es: " << numerador / denominador << std::endl;
		return std::to_string(numerador / denominador);
	}
	else {
		int maximoDivisor = mcd(numerador, denominador);
		std::cout << "El resultado de la elevar es: " << numerador / maximoDivisor << " / ";
		std::cout << denominador / maximoDivisor << std::endl;
	}
}
std::string Racional::ElevarEquivalente() {
		if ((a / b) == (c / d)) {
			numerador = a * a;
			denominador = b * b;
			if (numerador%denominador == 0) {
				std::cout << "El resultado de la elevar es: " << numerador / denominador << std::endl;
				return std::to_string(numerador / denominador);
			}
			else {
				int maximoDivisor = mcd(numerador, denominador);
				std::cout << "El resultado de la elevar es: " << numerador/ maximoDivisor << " / ";
				std::cout << denominador/ maximoDivisor << std::endl;
			}
		}
		else {
			std::cout << "Las fraciones no son equivalentes" << std::endl;
		}
		return 0;
}
Racional::~Racional(){}