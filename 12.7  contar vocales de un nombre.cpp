#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void pedirdatos(int &);
void contarvocales(char *,int,int &);

const int n = 30;
char *nombre;

int main(){
	
	int contador=0,caracteres;
	
	pedirdatos(caracteres);
	contarvocales(nombre,caracteres,contador);
	
	cout<<"La cantidad de vocales en tu nombre es de: "<<contador;
	
	delete[] nombre;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void pedirdatos(int &caracteres){
	
	nombre = new char [n];
	
	cout<<"Dame tu nombre: ";cin.getline(nombre,n,'\n');
	
	strlwr(nombre);
	caracteres =strlen(nombre);
}
void contarvocales(char *nombre,int caracteres,int &contador){
	
	for(int i=0;i<caracteres;i++){
		if((*(nombre+i)=='a')||(*(nombre+i)=='e')||(*(nombre+i)=='i')||(*(nombre+i)=='o')||(*(nombre+i)=='u')){
			contador++;
		}
	}
}
