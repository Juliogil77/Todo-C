// CLASES COMPUESTAS; SON AQUELLAS QUE ENTRE SUS ATRIBUTOS O METODOS
// TIENEN OBEJETOS DE OTRAS CLASES  

#include <iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante{
	
	private:
		string codigo;
		float promedio;
		Expediente exp;
		Direccion dir;
	public:
		Estudiante(string codigo,float promedio,int nroExpediente,string direccion) : exp(nroExpediente),dir(direccion){
			this->codigo = codigo;
			this->promedio = promedio;
		}
		
		void mostrarDatos(){
			cout<<"Codigo: "<<codigo<<endl;
			cout<<"Promedio: "<<promedio<<endl;
			cout<<"Numero de expediente: "<<exp.getnroExpediente()<<endl;
			cout<<"Direccion: "<<dir.getDireccion()<<endl;
		}
		
		
};
