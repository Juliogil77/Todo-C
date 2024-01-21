#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
//estructura de tipo Nodo
struct Nodo{
	char dato;
	Nodo *siguiente;
};
//prototipos de funcion
void menu();
void insertarCola(Nodo *&,Nodo*&,char);
void sacarCola(Nodo *&,Nodo *&,char &);
bool colaVacia(Nodo *);

int main (){
	
	menu();
	

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void menu(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	char car;//caracter 
	int des; // desicion 
	
	do{
		cout<<"\t\tMENU\n1.Insertar un caracter a una cola\n2.Mostrar todos los elementos de la cola\n3.Salir\n";
		cout<<"Opcion: ";cin>>des;cout<<"\n\n";
		switch(des){
			case 1:
				cout<<"Digite un caracter: ";cin>>car;
				insertarCola(frente,fin,car);break;
				system ("pause");
			case 2:
				while(frente!=NULL){
					sacarCola(frente,fin,car);
					if(frente!=NULL){
						cout<<car<<", ";
					}
					else{
						cout<<car<<".";
					}
				}
				
				cout<<"\n";
				system ("pause");break;
				
			case 3:
				cout<<"Gracias por preferirnos";break;
			default:
				cout<<"Opcion incorrecta intentelo de nuevo";
		}
		fflush(stdin);
		system("cls");//limpiar pantalla
		
	}while(des!=3);
	
}
void insertarCola(Nodo *&frente,Nodo*&fin,char car){
	Nodo *nuevo_nodo = new Nodo ();
	
	nuevo_nodo->dato = car;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	cout<<"\tElemento "<<car<<" ha  sido agregado correctamente\n";
}
bool colaVacia(Nodo *frente){
	return (frente == NULL)? true : false;
}
void sacarCola(Nodo *&frente,Nodo *&fin,char &car){
	car = frente->dato;
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
