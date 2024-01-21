//AUTORREFERENCIA DEL OBJETO THIS
using namespace std;

class Perro{
	
	private: //atributos
		string nombre;
		string raza;
	public: //metodos
		Perro(string nombre,string raza){		//constructor 1
			this->nombre = nombre;
			this->raza = raza;
		
		}
		
		~Perro(){		//destructor
			
		}
		void mostrarDatos();
		void jugar();
};
