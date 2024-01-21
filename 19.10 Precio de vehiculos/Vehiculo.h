#include <iostream>
using namespace std;
class Vehiculo {
	
	private:		//atributos
		string marca;
		string modelo;
		float precio;
		
	public:			//metodos
		//constructor de la clase 
		Vehiculo(string marca,string modelo, float precio){
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}
		//constructor por defecto para el arreglo de objetos de la clase 
		Vehiculo(){
		}
		//destructor por defecto para vehiculo
		~Vehiculo(){
		}
		float getPrecio();
		void mostrarDatos();
		void pedirDatos();
};
