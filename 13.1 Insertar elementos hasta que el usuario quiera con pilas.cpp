#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void meterDatos(Nodo *&,int);
void sacarDatos(Nodo *&,int &);

int main (){
	Nodo *pila = NULL;
	int dat;
	int des;
	do{
		cout<<"Dame un numero para agragar a la pila: ";cin>>dat;
		meterDatos(pila,dat);
		cout<<"\nSi no quieres agragar mas elementos escribe pulsa 0: ";cin>>des;
		cout<<"\n\n";
	}while(des!=0);
	
	cout<<"mostrando y eleminando elementos de la pila: \n\n";
	
	while(pila!=NULL){
		sacarDatos(pila,dat);
		if(pila!=NULL){
			cout<<dat<<" , ";
		}
		else{
			cout<<dat<<".";
		}
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void meterDatos(Nodo *&pila,int dat){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = dat;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;	
}
void sacarDatos(Nodo *&pila,int &dat){
	Nodo *aux = pila;
	
	dat = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
