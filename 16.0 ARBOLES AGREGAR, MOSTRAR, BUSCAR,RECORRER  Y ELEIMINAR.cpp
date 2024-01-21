#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};
//prototipos de funciones 
void menu();
Nodo *crearNodo(int,Nodo *);				//crear nuevo nodo	
void insertarNodo(Nodo *&,int,Nodo *);		//insertar nodo al arbol

void mostrarArbol(Nodo *,int);		//mostrar arbol
bool busqueda(Nodo *,int);			//determinar si el elemento existe en el arbol
void preOrden(Nodo *);				// mostrar los elementos en el metodo preorder
void inOrden(Nodo *);				//mostrar los elementos en metodo inorden
void posOrden(Nodo *);	
			//primero izquierda, luego derecha y luego raiz
//eliminar el nodo
void eliminar(Nodo *,int);			
void eliminarNodo(Nodo *);			
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo*);
void destruirNodo(Nodo *);

//ARBOL
Nodo *arbol = NULL;

int main (){
	
	menu();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void menu(){
	
	int dato, opc, contador = 0;
	
	do{
		cout<<"\t\tMENU\n\n";
		cout<<"1. Insertar un nuevo nodo\n";
		cout<<"2. Mostrar el arbol completo\n";
		cout<<"3. Buscar elemento en el arbol\n";
		cout<<"4. Recorrer el arbol en preOrden\n";
		cout<<"5. Recorrer el arbol en inOrden\n";
		cout<<"6. Recorrer el arbol en posOrden\n";
		cout<<"7. Eliminar un elemento del arbol\n";
		cout<<"8. Salir\n\n";
		cout<<"Opcion: ";cin>>opc;
		
		switch(opc){
			
			case 1:
					cout<<"\nDigite un numero: ";cin>>dato;
					insertarNodo(arbol,dato,NULL);//insertando un nuevo nodo
					cout<<"\n";
					system("pause");
			break;
			case 2:
					cout<<"\nMostrando arbol completo: \n\n";
					mostrarArbol(arbol,contador);
					cout<<"\n";
					system ("pause");		
			break;
			case 3:
					cout<<"\nDigite el elemento a buscar: ";
					cin>>dato;
					if(busqueda(arbol,dato) == true){
						cout<<"\nElemento "<<dato<<" a sido encontrado en el arbol\n";
					}
					else{
						cout<<"\nElemento no encontrado\n";
					}
					cout<<"\n";
					system("pause");
			break;
			case 4:
					cout<<"\nREcorrido en preOrden: \n";
					preOrden(arbol);
					cout<<"\n\n";
					system ("pause");					
			break;
			case 5:
					cout<<"\nRecorrido en inOrden: \n";
					inOrden(arbol);
					cout<<"\n\n";
					system("pause");
				
			break;
			case 6:
					cout<<"\nRecorrido en posOrden: \n";
					posOrden(arbol);
					cout<<"\n\n";
					system("pause");
				
			break;
			case 7:
					cout<<"\nDigite el numero a eliminar: ";
					cin>>dato;
					eliminar(arbol,dato);
					cout<<"\n\n";
					system("pause");
			break;
		}
		
		system("cls");
			
	}while(opc!=8);
	
	
}
Nodo *crearNodo(int n,Nodo *padre){
	Nodo *nuevo_nodo = new Nodo ();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}
void insertarNodo(Nodo *&arbol,int n, Nodo *padre){
	
	if(arbol == NULL){					//si el arbol esta vacio
		Nodo *nuevo_nodo = crearNodo (n,padre);
		arbol =nuevo_nodo;
	}
	else{								//si el arbol tiene 1 nodo o mas
		int  valorRaiz = arbol->dato;	//obteniendo valor de la raiz
		if(n < valorRaiz){				//si el elemento es menor a la izquierda
			insertarNodo(arbol->izq,n,arbol);	
		}
		else{							//si el elemento es mayor a la derecha
			insertarNodo(arbol->der,n,arbol);	
		}
	}
}
void mostrarArbol(Nodo *arbol,int contador){
	
	if(arbol==NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der,contador+1);
		for(int i=0;i<contador;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,contador+1);		
	}
}
bool busqueda(Nodo *arbol,int n){
	
	if(arbol==NULL){					//si el arbol esta vacio retornamos false
		return false;
	}
	else if(arbol->dato == n){			//si el nodo es igual al elemento retorna true
			return true;
	}
	else if(n < arbol->dato){			//si el elemento es menor buscar por izquierda
		
		return busqueda(arbol->izq,n);
	}
	else{								//si el elemento es mayor buscar por la derecha 
		return busqueda(arbol->der,n);
	}
}
void preOrden(Nodo *arbol){		//primero raiz luedo izquierda y luego derecha
	
	if(arbol==NULL){
		return;
	}
	else{
		
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}
void inOrden(Nodo *arbol){		//primero izquierda, luego derecha y despues raiz
	if(arbol==NULL){
		return;
	}
	else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}
void posOrden(Nodo *arbol){		//primero izquierda, luego derecha y luego raiz
	if(arbol==NULL){
		return;
	}
	else{
		posOrden(arbol->izq);
		posOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}
void eliminar(Nodo *arbol,int n){
	if(arbol==NULL){		//si el arbol esta vacio 
		return; // no se hace nada
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);	//si el valor es menor busca por la izquierda
	}
	else if(n > arbol->dato){
		eliminar(arbol->der,n);	//si el valor es mayor busca por la derecha 
	}
	else{						//si ya se encontro el valor 
		eliminarNodo(arbol);
	}
}
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){	//si el arbol esta vacio se retorna NULL
		return NULL;
	}
	if(arbol->izq){		//si teiene hijo izquierdo 
		return minimo (arbol->izq);
	}
	else{				//si no tiene hijo izquierdo
		return arbol;	//retornamos el mismo nodo 	
		
	}
}
void reemplazar(Nodo *arbol,Nodo*nuevoNodo){
	if(arbol->padre){ //arbol-> padre hay que asignarle su nuevo hijo
		if (arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){		//asignarle su nuevo padre al hijo
		nuevoNodo->padre = arbol->padre;
	}
	
}
void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
//funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq  && nodoEliminar->der){
		Nodo *menor = minimo (nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izq){	//si tiene hijo izq
		reemplazar (nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der){	//si tiene hijo der
		reemplazar (nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}
	else{						//si no tiene hijos
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
}



