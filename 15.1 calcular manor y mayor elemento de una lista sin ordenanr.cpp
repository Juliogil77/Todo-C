#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
//Nodo para la lista
struct Nodo {
	int dato;
	Nodo *siguiente;
};
//prototipos de funcion
void menu();
void agregarNodo(Nodo *&,int);
void mayorMenor(Nodo *);

int main (){
	
	menu();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void menu(){
	
	Nodo *lista = NULL;
	int opc, dato;
	
	do{
		cout<<"\t\tMENU\n\n";
		cout<<"1.Agregar elemento a la Lista\n";
		cout<<"2.Mostrar Elementos Calcular mayor y menor elemento\n";
		cout<<"3.Salir\n\n";
		cout<<"Opcion: ";cin>>opc;
		switch(opc){
			case 1:
					cout<<"Digite un numero: ";cin>>dato;
					agregarNodo(lista,dato);
					system("pause");
			break;
			case 2:
					mayorMenor(lista);
					system("pause");		
			break;	
		}
		
		system("cls");
	}while(opc!=3);
}
void agregarNodo(Nodo *&lista,int n){
	
	Nodo *nuevo_nodo = new Nodo ();
	Nodo *aux1;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista==NULL){					//si la lista etsa vacia
		lista = nuevo_nodo;				//agregamos el primer elemento a la lista
		
	}
	else{
		aux1 = lista;					//aux1 apunta al inicio de la lista
		while(aux1->siguiente!=NULL){	//recorremos la lista
			aux1 = aux1->siguiente;		//avanzamos posiciones en la lista
			
		}
		aux1->siguiente = nuevo_nodo;	//agrego el nuevo nodo a la lista
	}

	
	cout<<"\t\tElemento "<<n<<" Agregado correctamente"<<"\n\n";
}

void mayorMenor(Nodo *lista){
	
	Nodo *actual = new Nodo ();
	actual = lista;
	
	//auxiliares para determinar mayor y menor numero
	Nodo *auxMayor;
	auxMayor->dato = -9999;
	
	Nodo *auxMenor;
	auxMenor->dato = 9999;
	
	while(actual!=NULL){
		if(actual->dato > auxMayor->dato){
			auxMayor = actual;
		}
		if(actual->dato < auxMenor->dato){
			auxMenor = actual;
		}
		cout<<actual->dato<<" ";
		actual = actual->siguiente;
	}
	cout<<"\nEl numero mayor es "<<auxMayor->dato<<" y el numero menor es "<<auxMenor->dato<<"\n\n";
	
}

