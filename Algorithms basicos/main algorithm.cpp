#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <cstdlib>
using namespace std;\

int numerosAleatorios(){
	return rand()%10;
}

int main(int argc, char** argv) {
	
	list <int> valores(10);	//lista de 10 elementos enteros
	
	//Generando numeros aleatorios en un rango de la lista
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	//mostrando los elementos de la lista
	ostream_iterator<int> salida (cout,"|");
	copy(valores.begin(),valores.end(),salida);
	
	//buscamos la primera aparicion del numero 8 en la lista
	list<int>::iterator i;
	i = find(valores.begin(),valores.end(),8);
	
	cout<<"\n\n";
	//analizamos si el valor de i no sobrepasa los rangos de la lista
	
	if(i != valores.end()){
		cout<<"El elemento "<<*i<<" si ha sido encontrado";
	}
	else{
		cout<<"El elemento no ha sido encontrado";
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
