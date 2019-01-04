#pragma once
class Racional {
public:
	Racional(double, double, double, double);
	~Racional();
	double sumaDeFracciones();
	double restaDeFracciones();
	double multiplicacionDeFracciones();
	double divisionDeFracciones();
	double eleverFraccion();
	double ElevarEquivalente();
private: 
	double a, b, c, d, resultado;
};