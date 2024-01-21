#include <iostream>
#include <stdlib.h>
#include "Tablero.h"
using namespace std;

int main(int argc, char** argv) {
	
	int opc,posix,posiy,numovi;
	Tablero *objeto1;
	
	//pidiendo posiciones iniciales
	cout<<"Dame la Posicion inicial del objeto: \n";
	cout<<"X = ";cin>>posix;
	cout<<"Y = ";cin>>posiy;
	
	//creando el objeto dinamico 
	objeto1 = new Tablero(posix,posiy);
	
	//creando opciones para movimiento
	do{
		cout<<"\t\tOpciones de movimiento\n\n";
		cout<<"1.Arriba\n";
		cout<<"2.Abajo\n";
		cout<<"3.Izquierda\n";
		cout<<"4.Derecha\n";
		cout<<"5.Salir\n\n";
		cout<<"Opcion: ";cin>>opc;
		system ("cls");
		
		switch(opc){
			
			case 1:	cout<<"Cuantas unidades de movimiento hacia arriba: ";cin>>numovi;
					objeto1->arriba(numovi);;
					break;
					
			case 2: cout<<"Cuantas unidades de movimiento hacia abajo: ";cin>>numovi;
					objeto1->abajo(numovi);
					break;
			
			case 3:	cout<<"Cuantas unidades de movimiento hacia izquierda: ";cin>>numovi;
					objeto1->izquierda(numovi);
					break;
			case 4:	cout<<"Cuantas unidades de movimiento hacia derecha: ";cin>>numovi;
					objeto1->derecha(numovi);
					break;
			default:cout<<"Hasta luego";
		}
		cout<<"La nueva poscicion: x = "<<objeto1->getx()<<" y = "<<objeto1->gety();
		cout<<"\n\n";
		system ("pause");
		system ("cls");
		
	}while(opc!=5);
	
	cout<<"\nLa Poscicion final fue de: x = "<<objeto1->getx()<<" y = "<<objeto1->gety();
	
	delete [] objeto1;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}


