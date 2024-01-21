#include <iostream>
#include <stdlib.h>
#include "Felino.h"
using namespace std;

class GatoDomestico : public Felino{
	
	private:
		string nombredueno;
		
	public:
		GatoDomestico(int anonaci, string lugarnaci, string raza, string nombredueno) : Felino(anonaci,lugarnaci,raza){
			this->nombredueno = nombredueno;
		}
		
		~GatoDomestico(){
			
		}
		
		string imprimirdieta(){
			return "La dieta del gato domestico es con whiskas";
		}
		
		void setnombredueno (string nuevonombre){
			this->nombredueno = nuevonombre;
		}
		
		string getnombredueno(){
			return nombredueno;
		}
};
