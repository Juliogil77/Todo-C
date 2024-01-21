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
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&(aux1->dato <=n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	} 
	if(lista == aux1){
		lista = nuevo_nodo;
	}
	else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	
	cout<<"\t\tElemento "<<n<<" Agregado correctamente"<<"\n\n";
}

void mayorMenor(Nodo *lista){
	
	Nodo *actual = new Nodo ();
	actual = lista;
	
	//auxiliares para determinar mayor y menor numero
	Nodo *auxMayor;
	Nodo *auxMenor = actual;
	while(actual!=NULL){
		if(actual->siguiente == NULL){
			auxMayor=actual;
		}
		cout<<actual->dato<<" ";
		actual = actual->siguiente;
		
		
	}
	cout<<"\nEl numero mayor es "<<auxMayor->dato<<" y el numero menor es "<<auxMenor->dato<<"\n\n";
	
}

