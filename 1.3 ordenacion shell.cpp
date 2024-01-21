#include <iostream>
#include <stdlib.h>
using namespace std;

void intercambio(float &x,float &y);
void ordenacionShell(float a[],int n);

int main(){
	
	float arreglo[]={4,6,1,9,5,10,2,11,19,7};
	ordenacionShell(arreglo,10);
	
	cout<<"Arreglo de forma ascendente"<<endl;
	for(int i=0;i<10;i++){
		
		cout<<arreglo[i]<<" ";
	}
}
void ordenacionShell(float a[],int n){
	int salto,i,j,k;
	salto = n/2;
	
	while(salto>0){
		for(i=salto;i<n;i++){
			j = i-salto;
			while(j>=0){
				k = j + salto;
				if(a[j]<=a[k]){//el par de elementos esta ordenado
					j =-1;
				}
				else{//par de elementos desordenados
					intercambio(a[j],a[k]);
					j -=salto;
					
				}
			}
		}
		salto = salto/2;
	}
}
void intercambio(float &x,float &y){
	float aux;
	aux = x;
	x = y;
	y = aux;
	
}


