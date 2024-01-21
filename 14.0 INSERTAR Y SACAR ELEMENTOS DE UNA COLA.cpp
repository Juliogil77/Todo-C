#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//prototipos de funcion
void insertar_cola(Nodo *&,Nodo*&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &);

int main (){
	
Nodo *frente = NULL;
Nodo *fin = NULL;

int dato;

cout<<"digite un numero: ";
cin>>dato;	
insertar_cola(frente,fin,dato);

cout<<"digite un numero: ";
cin>>dato;	
insertar_cola(frente,fin,dato);

cout<<"digite un numero: ";
cin>>dato;	
insertar_cola(frente,fin,dato);


//eliminar elementos de la cola
cout<<"quitando los elementos de la cola";
while(frente !=NULL){
	suprimirCola(frente,fin,dato);
	
	if(frente != NULL){
		cout<<dato<<", ";
	}
	else{
		cout<<dato<<".";
	}
}
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void insertar_cola(Nodo *&frente,Nodo*&fin,int n){
	Nodo *nuevo_nodo = new Nodo ();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	
	cout<<"\tElemento "<<n<<" insertado correctamente\n";	
	
}
//funcion para saber si la cola esta vacia 
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}
//funcion para eliminar una cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}
