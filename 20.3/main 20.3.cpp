#include <iostream>
#include <stdlib.h>
#include "Felino.h"
#include "GatoDomestico.h"
using namespace std;

int main(int argc, char** argv) {
	
	GatoDomestico *minino = new GatoDomestico(2012,"Bogota","tricolor","Sandra Ximena");
	Felino *estrellaCirco = new Felino(2008,"Arabia","Gepardo","Hermanos Gasca");
	
	cout<<"\t\tDIETAS\n\n";
	cout<<"Gato: "<<minino->imprimirdieta()<<endl;
	cout<<"Felino: "<<estrellaCirco->imprimirdieta()<<endl;
	
	cout<<"\t\tANO NACIMIENTO - LUGAR NACIMIENTO\n\n";
	cout<<"Gato: "<<minino->getanonaci()<<" - "<<minino->getlugarnaci()<<endl;
	cout<<"Gato: "<<estrellaCirco->getanonaci()<<" - "<<estrellaCirco->getlugarnaci()<<endl;
	
	cout<<"\t\tCambiar el nombre del dueno del gato: "<<endl;
	string nuevonombre;
	cout<<"Digite el nuevo nombre del dueno: ";getline(cin,nuevonombre);
	minino->setnombredueno(nuevonombre);
	cout<<"El nuevo dueno es: "<<minino->getnombredueno()<<endl;
	
	cout<<"\t\tRAZA\n\n";
	cout<<"Gato: "<<minino->getraza()<<endl;
	cout<<"Felino: "<<estrellaCirco->getraza()<<endl;
	
	cout<<"\t\tCambiar el nombre del circo: "<<endl;
	string nuevocirco;
	cout<<"Digite el nuevo nombre del circo: ";getline(cin,nuevocirco);
	estrellaCirco->setnombrecirco(nuevocirco);
	cout<<"El nuevo dueno es: "<<estrellaCirco->getnombrecirco()<<endl;
	
	
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
