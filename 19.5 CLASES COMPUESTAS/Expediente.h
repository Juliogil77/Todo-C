#include <iostream>
using namespace std;

class Expediente{
	
	private:		//atributos
		int nroExpediente;
	public:
		Expediente(int nroExpediente){
			this->nroExpediente = nroExpediente;
		}
		Expediente(){
			
		}
		~Expediente(){
			
		}
		int getnroExpediente(){
			return nroExpediente;
		}
};
