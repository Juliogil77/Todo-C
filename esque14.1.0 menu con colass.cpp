#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct Nodo{
	char dato;
	Nodo *siguiente;
};
//prototipos de funcion
void menu();
void insertarCola(Nodo *&,Nodo *&,char);
bool colaVacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,char &);
int main (){
	
	menu();
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void menu(){
	char dato;
	int opc;
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		cout<<"\t\tMENU\n";
		cout<<"1.Insertar un caracter a una cola"<<endl;
		cout<<"2.Mostrar todos los elementos de la cola"<<endl;
		cout<<"3.Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		
		switch(opc){
			case 1: cout<<"\nIngrese el caracter para agregar a la cola: ";
					cin>>dato;
					insertarCola(frente,fin,dato);
					break;
					
			case 2: cout<<"\nMostrando los elementos de la cola: ";
					while(frente!=NULL){
						suprimirCola(frente,fin,dato);
						if(frente != NULL){
							cout<<dato<<", ";
						}
						else{
							cout<<dato<<".";
						}
					}
					system ("pause");
					break;
						
			case 3: 
					cout<<"gracias por preferirnos\n";
					system ("pause");
					break;
			
			default:
					cout<<"opcion incorrecta intentelo de nuevo\n";
					system ("pause");
			
			
		}
		system ("cls");
	}while(opc != 3);
}
//insertar elementos en la cola
void insertarCola(Nodo *&frente,Nodo *&fin,char n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}
//funcion para saber si frente esta vacia 
bool colaVacia(Nodo *frente){
	return (frente==NULL)? true : false;
}
//funcion para eliminar elementos de una cola 
void suprimirCola(Nodo *&frente,Nodo *&fin,char &n){
	
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;		
	}
	delete aux;
}

