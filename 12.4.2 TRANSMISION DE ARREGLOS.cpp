/*
TRANSMICION DE ARREGLOS

EJEMPLO : HALLAR EL MAXIMO ELEMENTO DE UN ARREGLO
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int hallarmax (int *,int);

int main(){
	
	const int nElementos = 5;
	int numeros[] = {3,5,2,8,1};
	
	cout<<"El numero mayor del vector es: "<<hallarmax(numeros,nElementos);
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
int hallarmax (int *dirvec,int nElementos){
	int max = -999;
	for(int i=0;i<nElementos;i++){
		
		if(*(dirvec+i)>max){
			max = *(dirvec+i);
		}
	}
	return max;	
}
