#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Persona{	//dentro de la clase persona debe ir los atributos y los metodos de la clase 
	private: //atributos encapsulados por el private
		int edad;
		string nombre;
		
	public:	//metodos 
		Persona(int,string);	//constructor de la clase
		void leer();
		void correr();	
	
};

//nos sirve para inicializar los atributos 
Persona::Persona(int _edad, string _nombre){
	
	edad = _edad;
	nombre = _nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" anos"<<endl;	
}

int main(){
	
	Persona p1 = Persona(20,"Julio");
	Persona p2(19,"Maria");
	Persona p3(21,"Juan");
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.correr();
	

	cout<<"\n\n\n";
	system("pause");
	return 0;
}

