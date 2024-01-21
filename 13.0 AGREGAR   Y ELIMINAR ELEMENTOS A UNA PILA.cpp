#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente; 
};

 void agregarPila(Nodo *&,int);//prototipo de funcion para agregar elementos 
 void sacarPila(Nodo *&,int &);//prototipo de funcion para sacar elementos

int main (){
	
	Nodo *pila = NULL;
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"Sacando elementos de la pila: ";
	
	while(pila !=NULL){ //mientras no sea el final de la pila
		
		sacarPila(pila,dato);
		if(pila !=NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo(); //1.crear el espacio en memoria para almacenar un nodo
	nuevo_nodo->dato = n;         //2. cargar el valor dentro del nodo (dato)
	nuevo_nodo->siguiente = pila;//3. cargar el puntero pila dentro del nodo(*siguiente)
	pila = nuevo_nodo;          //4. Asignar el nuevo nodo a pila 
	
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<"\n\n";
}
void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
	
	
}
