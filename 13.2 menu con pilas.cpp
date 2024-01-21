#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Nodo{
	char Dato;
	Nodo *siguiente;
};

void agregarPilas(Nodo *&,char);
void quitarPilas(Nodo *&,char &);

int main (){
	
	Nodo *pila = NULL;
	char dato;
	int menu;
	
	do{
		cout<<"1. Insertar un caracter a la pila\n";
		cout<<"2. Mostrar todos los elementos de la pila\n";
		cout<<"3. Salir\n\n";
		cout<<"opcion: ";cin>>menu;
		switch(menu){
			case 1:
				cout<<"Inserta caracter: ";cin>>dato;
				agregarPilas(pila,dato);
				cout<<"El dato "<<dato<<" a sido agregado correctamente\n\n";
				break;
			case 2:
				cout<<"\nLos datos son: ";
				while(pila!=NULL){
					quitarPilas(pila,dato);
					if(pila!=NULL){
						cout<<dato<<", ";
					}
					else{
						cout<<dato<<".";
					}
				}
				cout<<"\n\n";
				system ("pause");
				break;		
			case 3:
				cout<<"\nGracias por preferirnos";
				break;			
			default:
				cout<<"\nEleccion incorrecta intentelo de nuevo\n\n";
		}
		fflush(stdin);
		system ("cls");//limpiar pantalla
	}while(menu!=3);
	

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void agregarPilas (Nodo *&pila,char dato){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->Dato = dato;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}
void quitarPilas(Nodo *&pila,char &dato){
	Nodo *aux = pila;
	
	dato = aux->Dato;
	pila = aux->siguiente;
	delete aux;
}

