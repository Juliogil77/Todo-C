#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int arreglo[10];
	int *posarreglo;
	
	for(int i=0;i<10;i++){
		cout<<"Dame el elemento de la posicion ["<<i+1<<"]: ";cin>>arreglo[i];

	}
	cout<<"\n\n";
	posarreglo = arreglo;
	
	for(int i=0;i<10;i++){
		
		if(*posarreglo%2==0){
			
			cout<<"El numero "<<*posarreglo<<" es par, y su posicion de memoria es: "<<posarreglo;
		}
		else{
			
			cout<<"El numero "<<*posarreglo<<" es impar, y su posicion de memoria es: "<<posarreglo;
		}
		
		*posarreglo++;
		cout<<"\n\n";
	}
	
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
