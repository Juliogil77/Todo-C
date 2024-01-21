#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Persona{
	
	private:			//atributos
		string nombre;
		int edad;
	public:				//metodos
		Persona(string,int);
		virtual void mostrar(); //el virtual indica que se trata de polimorfismo
};
//clase hija de persona
class Alumno : public Persona{
	private:
		float notafinal;
	public:
		Alumno(string,int,float);
		void mostrar();
};
//clase hija de persona
class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};
//constructor de la clase padre persona
Persona::Persona(string _nombre,int _edad){
	
	nombre = _nombre;
	edad = _edad;
}
//constructor de la clase hija alumno
Alumno::Alumno(string _nombre,int _edad,float _notafinal) : Persona(_nombre,_edad){
	
	notafinal = _notafinal;
}
//constructor de Profesor
Profesor::Profesor(string _nombre,int _edad,string _materia) : Persona(_nombre,_edad){
	
	materia = _materia;
}

int main(){
	
	Persona *vector[3];
	
	vector[0] = new Alumno("Julio",19,9.7);
	vector[1] = new Alumno ("Diego",23,8.5);
	vector[2] = new Profesor("Juanjo",40,"sistemas secuenciales programables");
	
	vector[0]->mostrar();
	cout<<"\n\n";
	vector[1]->mostrar();
	cout<<"\n\n";
	vector[2]->mostrar();
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Alumno::mostrar(){
	Persona::mostrar();
	cout<<"Nota final: "<<notafinal<<endl;
}
void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia Impartida: "<<materia<<endl;
}

