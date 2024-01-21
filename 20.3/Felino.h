#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include <stdlib.h>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero{
	
	private:
		string nombrecirco;
		
	public:
		//constructor para felino completo 
		Felino (int anonaci, string lugarnaci, string raza, string nombrecirco) : Mamifero(anonaci,lugarnaci,raza){
			this->nombrecirco = nombrecirco;
		}
		//constructor para felino que subderiva en minino
		Felino (int anonaci,string lugarnaci,string raza) : Mamifero(anonaci,lugarnaci,raza){
			
		}
		
		~Felino(){
			
		}
		
		string imprimirdieta(){
			return "La dieta del felino es a base de carne cruda";
		}
		
		void setnombrecirco(string nuevonombre){
			this->nombrecirco = nuevonombre;
		}
		string getnombrecirco(){
			return nombrecirco;
		}
};

#endif
