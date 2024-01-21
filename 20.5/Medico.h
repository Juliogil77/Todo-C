#include <stdlib.h>
#include <iostream>
#include "Persona.h"
using namespace std;

class Medico : public Persona{
	
	private:
		string titulo;
		int expe;
		
	public:
		
		Medico(string nombre,string apellido,int edad,string titulo,int expe) : Persona(nombre,apellido,edad){
		this->titulo = titulo;
		this->expe = expe;	
		}
		
		~Medico(){
			
		}
		
		//metodos getters 
		string getTitulo(){
			return titulo;
		}
		
		int getExpe(){
			return expe;
		}
		//fin metodos getters 
		
		//metodos propios
		
		void curarLesion(){
			cout<<"Curar lesion"<<endl;
	
		}
		
		//implementacion de funcion virtual
		void partido(){
			cout<<"Da asistencia medica en el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"Da asistencia medica en el entrenamiento"<<endl;
		}

};
