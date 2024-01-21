#include <iostream>
#include <stdlib.h>
using namespace std;

class Atleta{
	
	private:			//atributos
		int noAtleta;
		string nombre;
		float tiempo;
		
	public:				//metodos
		Atleta(int noAtleta,string nombre,float tiempo){	//constructor principal
			this->noAtleta = noAtleta;
			this->nombre = nombre;
			this->tiempo = tiempo;
		}
		Atleta(){		//constructor de arreglos
			
		}
		~Atleta(){		//destructor de arreglo
			
		}
		float gettiempo();
		void mostrarDatos();
		static int indiceMtiempo(Atleta corredor[],int n);
		
		
	
};
