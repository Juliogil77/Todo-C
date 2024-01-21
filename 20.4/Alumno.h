#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Alumno{
	
	private: //atributos
		
		string carrera;
	
	public:	//metodos
	
		Alumno(string carrera){
			this->carrera = carrera;
		}
		
		~Alumno(){
			
		}
		
		void mostrarDatos(){
			cout<<"La carrera del alumno es: "<<carrera<<endl;
		}
		
		void setCambiarCarrera(string nuevaCarrera){
			this->carrera = nuevaCarrera;
		}
		
		string getCarrera(){
			return carrera;
		}
	
	
};

#endif
