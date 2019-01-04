#pragma once
#include <string>
class Racional {
public:
	Racional(int, int, int, int);
	~Racional();
	std::string sumaDeFracciones();
	std::string restaDeFracciones();
	std::string multiplicacionDeFracciones();
	std::string divisionDeFracciones();
	std::string eleverFraccion();
	std::string ElevarEquivalente();
private: 
	int a, b, c, d, numerador, denominador;
};