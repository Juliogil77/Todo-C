#include <iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
	cout<<"Digite la calificacion de matematicas: ";
	cin>>calMate;
	
	cout<<"\nDigite la calificacion de programacion: ";
	cin>>calProgra;
}

void Alumno::mostrarNotas(){
	cout<<"Nota de matematica: "<<calMate<<endl;
	cout<<"Nota de programacion: "<<calProgra<<endl;
	cout<<"Preomedio: "<<(calMate+calProgra)/2<<endl;
}
