#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;
int main(int argc, char** argv) {
	
	list <int> datos;
	
	//agregar elementos a la lista 
	
	datos.push_back(5);	//agrega al final de la lista
	datos.push_back(1);
	datos.push_back(6);
	
	datos.push_front(2);	//agregar al inicio de la lista
	datos.push_front(7);
	
	//ordenar elementos de menior a mayor
	
	datos.sort();
	
	//creamos iterador de la lista
	
	list <int> :: iterator i;
	
	i = datos.begin();
	
	//mostrar elementos de lista
	while (i != datos.end()){
		cout<< *i <<"|";
		
		i++;
	}
	
	//eliminar elementos del final de la lista
	datos.pop_back();
	datos.pop_front();
	
	cout<<endl;
	
	i = datos.begin();
	
	while (i != datos.end()){
		cout<< *i <<"|";
		
		i++;
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
