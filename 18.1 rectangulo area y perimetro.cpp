#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Rectangulo{
	
	private:						//atributos
		float largo, ancho;
	public:							//metodos 
		Rectangulo(float,float);	//constructor	
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _largo,float _ancho){
	
	largo = _largo;
	ancho = _ancho;
}
void Rectangulo::perimetro(){
	float _perimetro;
	_perimetro = (largo*2) + (ancho*2);
	
	cout<<"El perimetro del rectangulo es de: "<<_perimetro<<endl;
}
void Rectangulo::area(){
	float _area;
	_area = largo * ancho;
	
	cout<<"El area del rectangulo es de: "<<_area<<endl;
}

int main(){
	
	Rectangulo n1(11,7);
	
	n1.perimetro();
	n1.area();


	cout<<"\n\n\n";
	system("pause");
	return 0;
}

