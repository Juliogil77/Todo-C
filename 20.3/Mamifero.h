#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
#include <stdlib.h>
using namespace std;

class Mamifero{
	
	private:
		int anonaci;
		string lugarnaci;
		string raza;
		
	public:
		Mamifero(int anonaci, string lugarnaci, string raza){
			this->anonaci = anonaci;
			this->lugarnaci = lugarnaci;
			this->raza = raza;
		}
		
		~Mamifero(){
			
		}
		
		virtual string imprimirdieta();
		
		int getanonaci(){
			return anonaci;
		}
		
		string getlugarnaci(){
			return lugarnaci;
		}
		
		string getraza(){
			return raza;
		}
	
};

#endif
