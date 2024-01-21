#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Deportista{
	
	private:
		string entrenador;
		
	public:
		
		Deportista(string entrenador){
			this->entrenador = entrenador;
		}
		
		~Deportista(){
			
		}
		
		void mostrarDatos(){
			cout<<"El entrenador es: "<<entrenador<<endl;
		}
		
		void setCambiarEntrenador(string nuevoEntrenador){
			this->entrenador = nuevoEntrenador;
		}
		
		string getEntrenador(){
			return entrenador;
		}
	
};

#endif

