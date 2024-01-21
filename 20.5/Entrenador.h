#include <stdlib.h>
#include <iostream>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
	
	private:
		string estrategia;
	
	public:
		
		Entrenador(string nombre,string apellido,int edad,string estrategia) : Persona(nombre,apellido,edad){
			
			this->estrategia = estrategia;
		}
		
		~Entrenador(){
			
		}
		
		//metodos getters
		
		string getEstrategia(){
			return estrategia;
		}
		
		//fin metodos getters
		
		//metodos propios
		
		void planificarEntrenamiento(){
			cout<<"Planifica el entrenamiento"<<endl;
			
		}
		
		//implementacion de metodos virtuales
		void partido(){
			cout<<"Dirige el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"Dirige el entrenamiento"<<endl;
		}
		
		
};
