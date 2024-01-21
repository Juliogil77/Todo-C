#include <iostream>
#include <stdlib.h>
using namespace std;
void intercambio(float &x,float &y){
	float aux;
	aux = x;
	x = y;
	y = aux;
}
void quicksort(float a[],int primero,int ultimo){
	int i,j,central;
	float pivote;
	
	central = (primero+ultimo) / 2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	
	do{
		while(a[i] < pivote) i++;
		while(a[j] > pivote) j++;
		
		if(i<=j){
			intercambio(a[i],a[j]);
			i++;
			j++;
		}
		
	}while(i<=j);
	
	if(primero < j){
		quicksort(a,primero,j);
	}
	if(i < ultimo){
		quicksort(a,i,ultimo);
	}
}
int main(){

	float arreglo[] = {4,7,1,8,2,10,5,9,3};
	
	quicksort(arreglo,0,8);
	
	cout<<"arreglo ordenado en forma ascendente"<<endl;
	for(int i=0;i<9;i++){
		cout<<arreglo[i]<<" ";
	}
	
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

