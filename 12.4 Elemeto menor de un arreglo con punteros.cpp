#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	
	int numeros[100],ev,menor=9999;
	int *posvec;
	cout<<"Dame el numero de elementos del vector: ";cin>>ev;
	
	
	for(int i=0;i<ev;i++){
		cout<<"Dame el numero de la posicion "<<i+1<<": ";cin>>numeros[i];
		
	}
	
	posvec = numeros; //como si fuera &numeros[0]
	
	for(int i=0;i<ev;i++){
		if(*posvec<menor){
			menor = *posvec;
		}
		*posvec++;
	}
	
	cout<<"\nEl menor elemento del vector es: "<<menor;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
