#ifndef PERSONA_H
#define PERSONA_H

#include <stdlib.h>
#include <iostream>
using namespace std;

class Persona{
	
	protected:
		
		string nombre,apellido;
		int edad;
		
	public:
		
		Persona(string nombre, string apellido, int edad){
			this->nombre = nombre;
			this->apellido = apellido;
			this->edad = edad;
		}
		
		~Persona(){
			
		}
		
		//funciones getters 
		
		string getNombre(){
			return nombre;
		}
		
		string  getApellido(){
			return apellido;
		}
		
		int getEdad(){
			return edad;
		}
		//fin de metodos getters
		
		//metodo propio
		void viajar(){
			 cout<<"Viajar"<<endl;
		}
		
		
		//metodos virtuales
		virtual void partido() =0 ;
		
		virtual void entrenamiento() = 0;
	
	
};

#endif
