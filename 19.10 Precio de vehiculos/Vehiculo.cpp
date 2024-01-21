#include <iostream>
#include "Vehiculo.h"
using namespace std;

float Vehiculo::getPrecio(){
	return precio;
}

void Vehiculo::mostrarDatos(){
	cout<<"\t\tDatos del vehiculo\n\n";
	cout<<"Marca: "<<marca<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Precio: "<<precio<<endl;
}
void Vehiculo::pedirDatos(){
	cout<<"Dame la marca del vehiculo: ";getline(cin,marca);
	cout<<"Dame el modelo del vehiculo: ";getline(cin,modelo);
	cout<<"Dame el precio del vehiculo: ";cin>>precio;
}
