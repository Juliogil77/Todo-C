#include <iostream>

using namespace std;

template <class T>
class Materia{
	
	private:
		string nombre;
		int clave;
		T calificacion;
	public:
		Materia(string nombre, int clave, T calificacion){
			this->nombre = nombre;
			this->clave = clave;
			this->calificacion = calificacion;
		}
		
		void mostrarDatos(){
			
			cout<<"Materia: "<<nombre<<endl;
			cout<<"Clave: "<<clave<<endl;
			cout<<"calificacion: "<<calificacion<<endl;
		}
		
		void setCalificacion(T nuevo){
			this->calificacion = nuevo;
		}
		
		T getCalificacion(){
			return calificacion;
		}
	
};

