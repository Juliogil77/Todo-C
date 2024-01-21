
//FUNCIONES AMIGAS
#include <iostream>
#include <stdlib.h>
#include "Personaje.h"

using namespace std;

//funcion para modificar los valores de ataque y defensa de un objeto personaje
void modificar(Personaje &p,int at,int def){
	
	p.ataque = at;
	p.defensa = def;
	
}
int main(int argc, char** argv) {
	
	Personaje *principal = new Personaje(100,90);
	
	principal->mostrarDatos();
	
	modificar(*principal,60,50);
	
	principal->mostrarDatos();
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
