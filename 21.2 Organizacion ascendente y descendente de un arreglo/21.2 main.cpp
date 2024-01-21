#include <iostream>
#include <stdlib.h>
#include "Ordenar.h"
using namespace std;

int main(int argc, char** argv) {
	
	const int elementos = 7;
	int numeros [elementos]={9,8,6,4,3,2,7};
	float numbers[elementos]={9.6,8.4,6.7,4.8,3,2,7};
	char letras[elementos]={'f','a','u','e','t','i','o'};
	
	cout<<"\tElementos desordenados\n\n";
	for(int i=0;i<7;i++){
		cout<<letras[i]<<" ";
	}
	
	ordenarAscendente(letras,elementos);
	
	cout<<"\n\tElementos ordenados ascendentemente\n\n";
	for(int i=0;i<7;i++){
		cout<<letras[i]<<" ";
	}
	
	ordenarDescendente(letras,elementos);
	
	cout<<"\n\tElementos ordenados descendentemente\n\n";
	for(int i=0;i<7;i++){
		cout<<letras[i]<<" ";
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
