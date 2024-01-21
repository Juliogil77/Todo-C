#include <iostream>
using namespace std;
class Cuadrilatero{
	
	private:	//atributos
		float l1,l2;
	public:		//metodos 
		//constructor general 1
		Cuadrilatero(float l1, float l2){
			this->l1 = l1;
			this->l2 = l2;
		}
		//constructor auxiliar 2
		Cuadrilatero(float l1){
			this->l1 =l1;
			this->l2 =l1;
		}
		
		float obtenerPerimetro();
		float obtenerArea();
};
