//Sobrecarga de constructores
#include <iostream>
using namespace std;

class Persona{
	
	//atributos
	private:
		string nombre;
		int edad;
		string dni;
	public:
		//metodo contructor 1
		Persona(string _nombre ,int _edad){
			nombre = _nombre;
			edad = _edad;
		}
		//metodo constructor 2
		Persona(string _dni){
			dni = _dni;
		}
		void correr(){
			cout<<"Soy "<<nombre<<", tengo "<<edad<<" anos y estoy corriendo una maraton"<<endl;
		}
		void correr(int km){
			cout<<"He corrido "<<km<<" Kilometros"<<endl;
		}
};

