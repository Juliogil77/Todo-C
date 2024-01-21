#include <iostream>
#include <stdlib.h>
#include "Perro.h"

using namespace std;

int main(int argc, char** argv) {
	
	Perro perro1("zoe","Golden Retriver");
	
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro();		//eliminar objeto estatico
	
	Perro *perro2 = new Perro("sasa","pitbull");	
	perro2->jugar();
	
	delete perro2;			//eliminar objeto dinamico
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
