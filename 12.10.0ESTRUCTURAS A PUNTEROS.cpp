#include <iostream>
#include <stdlib.h>
using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona,*persona_puntero = &persona; //convirtiendo la variable persona en puntero

void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	
	pedirDatos();
	mostrarDatos(persona_puntero);
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirDatos(){
	
	cout<<"Digite su nombre: ";
	cin.getline(persona_puntero->nombre,30,'\n');//igual que cin.getline(persona.nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>persona_puntero->edad;
}
void mostrarDatos(Persona *puntero_persona){
	
	cout<<"\nsu nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"su edad es: "<<puntero_persona->edad<<endl;
	
}	


