#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"

using namespace std;

int main(int argc, char** argv) {
	
	string nuevonombre;
	float porcentaje;
	
	//2 objetos tipo Alumno
	Alumno *alumnoJuan = new Alumno("ingenieria");
	Alumno *alumnoPedro = new Alumno("psicologia");
	
	//1 objeto tipo deportista
	Deportista *deporLuis = new Deportista("Julio Cesar");
	
	//2 objetos tipo BecadoDeportista
	BecadoDeporte *bdAna = new BecadoDeporte("Musica","Pedro Sanchez",457);
	BecadoDeporte *bdCarmen = new BecadoDeporte("Jurado","Hernesto",757);
	
	//mostrando datos
	cout<<"\t\tAlumnos\n";
	alumnoJuan->mostrarDatos();
	cout<<"\n";
	alumnoPedro->mostrarDatos();
	cout<<"\n\n";
	
	cout<<"\t\tDeportista\n";
	deporLuis->mostrarDatos();
	cout<<"\n\n";
	
	cout<<"\t\tBecados\n";
	bdAna->mostrarDatos();
	cout<<"\n";
	bdCarmen->mostrarDatos();
	cout<<"\n\n";
	
	//cambiando carrera de juan y ana
	cout<<"Dame la nueva carrera de Juan: ";getline(cin,nuevonombre);
	alumnoJuan->setCambiarCarrera(nuevonombre);
	cout<<"La nueva carrera de juan es: "<<alumnoJuan->getCarrera();
	
	cout<<"\n\nDame la nueva carrera de Ana: ";getline(cin,nuevonombre);
	bdAna->setCambiarCarrera(nuevonombre);
	cout<<"La nueva carrera de Ana es: "<<bdAna->getCarrera();
	
	//Cambiando el entrenador de Luis y Carmen 
	cout<<"\n\nDame el nuevo entrenador de Luis: ";getline(cin,nuevonombre);
	deporLuis->setCambiarEntrenador(nuevonombre);
	cout<<"El nuevo entrenador de Luis es: "<<deporLuis->getEntrenador();
	
	cout<<"\n\nDame el nuevo entrenador de Carmen: ";getline(cin,nuevonombre);
	bdCarmen->setCambiarEntrenador(nuevonombre);
	cout<<"El nuevo entrenador de Carmen es: "<<bdCarmen->getEntrenador();
	
	//Actualizando el monto de la beca de Ana y Carmen
	
	cout<<"\n\nDame el porcentaje de beca a sumar: ";cin>>porcentaje;
	bdAna->setCambiarBeca(porcentaje);
	cout<<"El nuevo valor de la beca es: "<<bdAna->getBeca();
	
	cout<<"\n\nDame el porcentaje de beca a sumar: ";cin>>porcentaje;
	bdCarmen->setCambiarBeca(porcentaje);
	cout<<"El nuevo valor de la beca es: "<<bdCarmen->getBeca();
	
	delete alumnoJuan;
	delete alumnoPedro;
	delete deporLuis;
	delete bdAna;
	delete bdCarmen;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
