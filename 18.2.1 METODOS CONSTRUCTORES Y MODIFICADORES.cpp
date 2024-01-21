#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Punto{
	private:
		int x, y;
	public:
		Punto();
		void setPunto(int,int);		//metodo Setters
		int getPuntoX();			//metodo Getters 
		int getPuntoY();
};

Punto::Punto(){
	
	
}
// establecemos valores a los atributos
void Punto::setPunto(int _x, int _y){
	
	x = _x;
	y = _y;
}
int Punto::getPuntoX(){
	return x;
}
int Punto::getPuntoY(){
	return y;
}
int main(){
	
	Punto punto1;
	
	punto1.setPunto(15,10);
	
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	
	
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

