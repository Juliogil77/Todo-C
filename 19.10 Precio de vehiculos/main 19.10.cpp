#include <iostream>
#include <stdlib.h>
#include "Vehiculo.h"

int main(int argc, char** argv) {
	
	Vehiculo *autobarato;
	int Nele;
	cout<<"cuantos vehiculos deseas ingresar: ";cin>>Nele;
	
	Vehiculo *autos = new Vehiculo[Nele];
	autobarato = new Vehiculo("lambo","aventador",999999);
	
	//pidiendo datos de los vehiculos
	for(int i=0;i<Nele;i++){
		(autos+i)->pedirDatos();
		if((autos+i)->getPrecio() < autobarato->getPrecio()){
			autobarato = (autos+i);
		}
		cout<<"\n\n";
	}
	
	//mostrando todos los vehiculos
	for(int i=0;i<Nele;i++){
		cout<<"Auto "<<i+1<<"\n";
		(autos+i)->mostrarDatos();
		cout<<"\n\n";
	}
	
	//mostrando auto mas barato
	cout<<"\n\n\t\tEl auto mas barato es \n";
	autobarato->mostrarDatos();
	
	delete [] autos; 
	delete [] autobarato;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
