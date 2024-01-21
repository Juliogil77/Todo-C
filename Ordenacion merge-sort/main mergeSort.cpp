#include <iostream>
#include <stdlib.h>
using namespace std;

void mergeSort(int [],int,int);
void mezcla(int [],int,int,int);

int main(int argc, char** argv) {
	
	
	int arreglo[] = {5,7,87,1,3,9};
	
	mergeSort(arreglo,0,5);
	
	for(int i = 0; i<6 ;i++){
		cout<<arreglo[i]<<endl;
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

void mergeSort(int a[],int primero,int ultimo){
	int central;
	
	if(primero < ultimo){
		central = (primero+ultimo)/2;
		mergeSort(a,primero,central);		//ordenamos la sublista izq
		mergeSort(a,central+1,ultimo);		//ordenamos la sublista derecha
		mezcla(a,primero,central,ultimo);	//mezclar los elementos ordenados
	}
}

void mezcla(int a[],int izquierda,int medio,int derecha){
	int *aux;
	int i,k,z;
	aux = new int [derecha-izquierda+1];
	i = z = izquierda;
	k = medio + 1;
	
	//ordenamos los elementos en el arreglo auxiliar
	
	while(i<=medio && k<=derecha){
		if (a[i] <= a[k]){
			
			aux[z++] = a[i++];
		}
		else{
			
			aux[z++] = a[k++];
		}
	}
	//ahora copiamos elementos de la lista que no quedo vacia
	
	while(i <= medio){
		aux[z++] = a[i++];
	}
	
	while(k<=derecha){
		aux[z++] = a[k++];
	}
	
	//copiamos lo elementos del arreglo auxiliar hacia a[]
	
	for(int i = izquierda; i <= derecha; i++){
		a[i] = aux[i];
	}
	
	delete aux;
}
