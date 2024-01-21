#include <iostream>
#include "Intercambio.h"

using namespace std;

template <typename T>
void ordenarAscendente(T *arreglo,int tamano){
	
	for(int i=0;i<tamano;i++){
		
		if(i!=0){
			if(*(arreglo+i)<*(arreglo+i-1)){
				
				intercambio(*(arreglo+i),*(arreglo+i-1));
				
				ordenarAscendente(arreglo,tamano);
			}	
		}
	}
}

template <typename T>
void ordenarDescendente(T *arreglo,int tamano){
	
	for(int i=0;i<tamano;i++){
		
		if(i!=0){
			if(*(arreglo+i)>*(arreglo+i-1)){
				
				intercambio(*(arreglo+i),*(arreglo+i-1));
				
				ordenarDescendente(arreglo,tamano);
			}	
		}
	}
}
