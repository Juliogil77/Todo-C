#include <iostream>
#include <stdlib.h>
#include "Materia.h"
using namespace std;

int main(int argc, char** argv) {
	
	
	Materia <int> alumno1("Biologia",6697,10);
	Materia <float> alumno2("Matematicas",1234,7.7);
	Materia <char> alumno3("Elpepe",4031,'A');
	
	alumno1.mostrarDatos();
	cout<<endl;
	alumno2.mostrarDatos();
	cout<<endl;
	alumno3.mostrarDatos();
	
	alumno3.setCalificacion('B');
	cout<<endl;
	alumno3.mostrarDatos();
	
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
