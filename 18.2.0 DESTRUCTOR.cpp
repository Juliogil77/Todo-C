#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Perro{
	
	private:
		string nombre, raza;
	public:
		Perro(string,string);	//constructor
		~Perro();				//DESTRUCTOR
		void mostrarDatos();
		void jugar();
};
//constructor
Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}
//destructor
Perro::~Perro(){
	
}

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}

int main(){
	
	Perro perro1("Fido","doberman");
	
	perro1.mostrarDatos();
	perro1.jugar();
	
	perro1.~Perro();	//destruyendo el objeto

	cout<<"\n\n\n";
	system("pause");
	return 0;
}

