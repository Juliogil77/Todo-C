#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;


int main(int argc, char** argv) {
	
	vector <int> numeros;	//arreglo de tipo entero
	
	numeros.push_back(5);
	numeros.push_back(10);
	numeros.push_back(1);
	numeros.push_back(15);
	numeros.push_back(20);
	
	//mostrar los elementos del arreglo
	
	for(int i=0 ; i<numeros.size() ; i++){
		
		cout<<numeros[i]<<"|";
	}
	
	// numeros.pop_back(); // elimina el ultimo elemento del arreglo
	
	//numeros.erase(numeros.begin()+1,numeros.begin()+3);	// eliminar posiciones especificas
	cout<<endl;
	
	for(int i=0 ; i<numeros.size() ; i++){
		
		cout<<numeros[i]<<"|";
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
