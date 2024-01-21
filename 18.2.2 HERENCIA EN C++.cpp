#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
class Persona{
	private: //atributos
		string nombre;
		int edad;
	public:	//metodos
		Persona(string,int);
		void mostrarPersona();
};

class Alumno : public Persona{
	
	private:	//atributos
		string codigoAlumno;
		float notaFinal;
	public:		//metodos
		Alumno(string,int,string,float);
		void mostrarAlumno();
	
};
//constructor de la clase persona (clase padre)
Persona::Persona(string _nombre, int _edad){	
	nombre = _nombre;
	edad = _edad;
}
//constructor de la subclase hija Alumno
Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal) : Persona(_nombre, _edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
	
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Alumno :: mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo Alumno: "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
	
}
int main(){
	
	Alumno alumno1("Julio Cesar",20,"12345343",17.87);
	
	alumno1.mostrarAlumno();
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

