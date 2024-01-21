#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Nodo {
	float dato;
	Nodo *siguiente;
};
//prototipos de funcion
void menu();
void agregarNodo(Nodo *&,int);
void sumaPromedio(Nodo *);

int main (){
	
	menu();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void menu(){
	
	Nodo *lista = NULL;
	int opc;
	float dato;
	
	do{
		cout<<"\t\tMENU\n\n";
		cout<<"1.Agregar numero a la lista\n";
		cout<<"2.Mostrar suma y promedio de numeros agregados\n";
		cout<<"3.Salir\n\n";
		cout<<"Opcion: ";cin>>opc;
		
		switch(opc){
			case 1:
					cout<<"Digite un numero: ";cin>>dato;
					agregarNodo(lista,dato);
					system ("pause");
			break;
			case 2:
					sumaPromedio(lista);
					system("pause");
			break;			
		}
		
		system ("cls");
		
	}while(opc!=3);
}

void agregarNodo(Nodo *&lista,int n){
	
	Nodo *nuevo_nodo = new Nodo ();
	Nodo *aux1;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){					//si la lista esta vacia
		lista = nuevo_nodo;
	}
	else{
		aux1 = lista;
		while(aux1->siguiente!=NULL){	//recorrer la lista
			
			aux1 = aux1->siguiente;		
		}
		
		aux1->siguiente = nuevo_nodo;	//agregamos nuevo nodo; 
	}
	cout<<"Elemento "<<n<<" agregado correctamente\n";
}
void sumaPromedio(Nodo *lista){
	
	Nodo *actual = lista;
	
	float Suma = 0, Contador = 0;
	cout<<"La lista es: \n";
	while(actual!=NULL){
		cout<<actual->dato<<" ";
		Suma += actual->dato;
		Contador++;
		actual = actual->siguiente;
	}
	
	cout<<"\n\nLa suma de todos los datos es de "<<Suma<<"\n";
	cout<<"El promedio de todos los datos es de "<<Suma/Contador<<"\n\n";
}

