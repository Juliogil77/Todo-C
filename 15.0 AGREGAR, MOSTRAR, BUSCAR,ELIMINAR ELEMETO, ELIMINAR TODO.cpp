		#include <iostream>
#include <stdlib.h>

using namespace std;

//Estrucctura nodo para la lista
struct Nodo{
	int dato;
	Nodo *siguiente;
};
//prototipos de funcion 
void menu();
void insertarLista(Nodo *&,int );
void mostrarLista(Nodo *);
void buscarLista(Nodo *,int );
void eliminarNodo(Nodo *&,int);
void eliminarLista(Nodo *&, int &);

Nodo *lista = NULL;

int main (){
	
	menu();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void menu(){
	
	int opc, dato;
	
	do{
		cout<<"\t\tMENU\n";
		cout<<"1.Insertar elementos a la lista\n";
		cout<<"2.Mostrar elementos de la lista\n";
		cout<<"3.Buscar elemento en la lista\n";
		cout<<"4.Eliminar elemento de la lista\n";
		cout<<"5.Dejar vacia la lista \n";
		cout<<"6.Salir \n";
		cout<<"Opcion : ";cin>>opc;
		switch(opc){
			case 1:
					cout<<"Digite un numero: ";
					cin>>dato;
					insertarLista(lista,dato);
					system ("pause");
			break;				
			case 2:
					cout<<"Mostrando elementos de la lista\n\n";
					mostrarLista(lista);
					system ("pause");
			break;
			case 3:
					cout<<"Digite el numero a buscar: ";
					cin>>dato;
					buscarLista(lista,dato);
					system ("pause");
			break;
			case 4:
					cout<<"Digite el numero a eliminar: ";
					cin>>dato;
					eliminarNodo(lista,dato);
					system("pause");
			break;		
			case 5:
					while (lista != NULL){
						eliminarLista(lista,dato);
						cout<<dato<<"->";
					}
					cout<<"\nTodos los datos eliminados correctamente\n";
					system("pause");
			break;
				
		}
		system ("cls");
	}while(opc!=6);
	
	
}

void insertarLista(Nodo *&lista,int n){
	
	Nodo *nuevo_nodo = new Nodo ();//crear nuevo nodo
	nuevo_nodo->dato = n; // Asignar el valor del dato que se quiere guardar
	// crear dos nodos auxiliares y asignarle a aux 1 valor de lista
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&(aux1->dato < n)){
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
	
	cout<<"\t\tElemento "<<n<<"  insertado a lista correctamente"<<endl;	
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual!=NULL){
		cout<<actual->dato<<"->";
		actual = actual->siguiente;
	}
	cout<<"\n\n";
}

void buscarLista(Nodo *lista, int n){
	bool band = false;
	Nodo *actual = new Nodo ();
	actual = lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		
		if(actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	if(band == true){
		cout<<"\nEl elemento "<<n<<" ha sido encontrado en la lista \n";
	}
	else{
		cout<<"\nEl elemento "<<n<<" no ha sido encontrado en la lista \n";
	}
}

void eliminarNodo(Nodo *&lista,int n){	
	if (lista!= NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		//recorrer la lista
		while ((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		//el elemento no ha sido encontrado
		if(aux_borrar==NULL){
			cout<<"Elemento no encontrado\n";
		}
		//el primer elemento es el que se va a elimianr
		else{
			if(anterior==NULL){
				lista = lista->siguiente;
				delete aux_borrar;
			}
			//el elemento esta en la lista pero no es el primer nodo
			else{
				anterior->siguiente = aux_borrar->siguiente;
				delete aux_borrar;
			}
			cout<<"Elemento "<<n<<" eliminado correctamente\n";
		}
	}	
}

void eliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}



