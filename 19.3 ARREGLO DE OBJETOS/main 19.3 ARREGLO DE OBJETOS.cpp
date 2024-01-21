//ARREGLO DE OBJETOS
#include <iostream>
#include <stdlib.h>
#include "Alumno.h"

using namespace std;

int main(int argc, char** argv) {
	
	Alumno alumnos[4]; //creacion de arreglo de objetos estatico
	
	Alumno *alumnos2 = new Alumno[3];//creacion de un arreglo de objetos dinamico
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->pedirDatos();
		cout<<endl;
	}
	cout<<"\t\tMostrando Datos\n\n";
	for(int i=0;i<3;i++){
		(alumnos2+i)->mostrarNotas();
		cout<<endl;
	}
	
	
	cout<<"\n\n";
	system ("Pause");
	return 0;
}
