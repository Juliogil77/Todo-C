#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

//clase padre
class Animal{
	
	private:
		int edad;
	public:
		Animal(int);
		virtual void comer();
};
//clase hija de animal: humano
class Humano : public Animal{
	private:
		string nombre;
	public:
		Humano(int,string);
		void comer();
		
};
//clase hija de animal: perro
class Perro : public Animal{
	private:
		string nombre,raza;
	public:
		Perro(int,string,string);
		void comer();
	
};
//constructor de la clase animal
Animal::Animal(int _edad){
	
	edad = _edad;
}
//constructor de la clase hija humano
Humano::Humano(int _edad,string _nombre) : Animal(_edad){
	
	nombre = _nombre;
}
//constructor de la clase hija perro
Perro::Perro(int _edad,string _nombre,string _raza) : Animal(_edad){
	nombre = _nombre;
	raza = _raza;
}
int main(){
	
	Animal *animales[2];
	
	animales[0] = new Perro(12,"Zoe","Golden Retriver");
	animales[1] = new Humano(19,"Julio Cesar");
	
	cout<<"-Perro-\n";
	animales[0]->comer();
	cout<<"\n\n-Humano-\n";
	animales[1]->comer();
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void Animal::comer(){
	cout<<"Yo como";
}
void Humano::comer(){
	Animal::comer();
	cout<<" en una mesa, sentado en una silla\n";
}
void Perro::comer(){
	Animal::comer();
	cout<<" en el suelo, con mi plato\n";
}

