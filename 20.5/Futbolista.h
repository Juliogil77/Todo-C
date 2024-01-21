#include <stdlib.h>
#include <iostream>
#include "Persona.h"
using namespace std;

class Futbolista : public Persona{
	
	private:
		int dorsal;
		string posicion;
	
	public:
		//constructor
		Futbolista(string nombre,string apellido,int edad,int dorsal,string posicion) : Persona(nombre,apellido,edad){
			this->dorsal = dorsal;
			this->posicion = posicion;
			
		}
		//destructor
		~Futbolista(){
			
		}
		
		//metodos getters
		int getDorsal(){
			return dorsal;
		}
		
		string getPosicion(){
			return posicion;
		}
		//fin de metodos getters
		
		//metodos propios
		void entrevista(){
			cout<<"Da una entrevista"<<endl;
		}		
		
		//implementacion de metodos virtualesa
		void partido(){
			cout<<"Juega el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"Entrena"<<endl;
		}
		//fin de implementacion de metodos virtuales
			
};
