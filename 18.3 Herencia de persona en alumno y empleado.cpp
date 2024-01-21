 #include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

//Clase Padre Persona
class Persona{
	private:			//atributos
		string nombre;
		int edad;
	public:				//metodos
		Persona(string,int);
		void mostrarPersona();
};

//Subclase hija izquierda Empleado
class Empleado : public Persona{
	
	private:			//atributos
		string empresa;
		string puesto;
	public:				//metodos
		Empleado(string,int,string,string);
		void mostrarEmpleado();
	
};
//Subclase hija derecha Estudiante
class Estudiante : public Persona{
	
	private:			//atributos
		string centro;
		double numeroAlumno;
	public:				//metodos
		Estudiante(string,int,string,double);
		void mostrarEstudiante();
};
//Subclase de la subclase derecha universitario
class Universitario : public Estudiante{
	
	private:
		string carrera;
	public:
		Universitario(string,int,string,double,string);
		void mostrarUniversitario();
};
//contructor de la clase padre Persona
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}
//Constructor de la subclase hija izquierda Empleado
Empleado::Empleado(string _nombre,int _edad,string _empresa,string _puesto) : Persona(_nombre,_edad){
	empresa = _empresa;
	puesto = _puesto;
}
//Constructor de la subclase hija derecha Estudiante
Estudiante::Estudiante(string _nombre,int _edad,string _centro,double _numeroAlumno) : Persona(_nombre,_edad){
	centro = _centro;
	numeroAlumno = _numeroAlumno;
} 
//constructor de la subclase de la subclase derecha Universitario
Universitario::Universitario(string _nombre,int _edad,string _centro,double _numeroAlumno,string _carrera) : Estudiante(_nombre,_edad,_centro,_numeroAlumno){
	carrera = _carrera;
}
int main(){
	Persona n1("Julio Cesar",19);
	Empleado n2("Julio Cesar",19,"Mercadona","Gerente A");
	Estudiante n3("Julio Cesar",19,"Isaac Peral",8042635);
	Universitario n4("Julio Cesar",19,"Universidad de Alcala",6523226,"Automatizacion y robotica");
	
	cout<<"-Persona-\n";
	n1.mostrarPersona();
	cout<<"\n\n";
	
	cout<<"-Empleado-\n";
	n2.mostrarEmpleado();
	cout<<"\n\n";
	
	cout<<"-Estudiante-\n";
	n3.mostrarEstudiante();
	cout<<"\n\n";
	
	cout<<"-Universitario-\n";
	n4.mostrarUniversitario();
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
//funcion para mostrar los datos de la clase padre persona
void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
//funcion para mostrar los datos de la subclase hija izquierda empleado
void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Empresa: "<<empresa<<endl;
	cout<<"Puesto: "<<puesto<<endl;
}
//funcion para mostrar los datos de la subclase hija derecha Estudiante
void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Centro de estudios: "<<centro<<endl;
	cout<<"Numero de alumno: "<<numeroAlumno<<endl;
}
//funcion para mostrar los datos de la subclase de la subclase derecha Universitario
void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"Nombre de la carrera: "<<carrera<<endl;
}


