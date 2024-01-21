#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

float Cuadrilatero::obtenerPerimetro(){
	float perimetro;
	perimetro = (l1*2)+(l2*2);
	return perimetro;
}
float Cuadrilatero::obtenerArea(){
	float area;
	area = l1 * l2;
	return area;
}
