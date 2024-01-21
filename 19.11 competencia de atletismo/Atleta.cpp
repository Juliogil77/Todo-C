#include <iostream>
#include <stdlib.h>
#include "Atleta.h"
using namespace std;

float Atleta::gettiempo(){
	return tiempo;
}
void Atleta::mostrarDatos(){
	cout<<"Numero de atleta: "<<noAtleta<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Tiempo de carrera: "<<tiempo<<endl;
	
}
int Atleta::indiceMtiempo(Atleta corredor[],int n){
	
	int indice = 0;
	float time;
	
	time = corredor[0].gettiempo();
	
	for(int i=1;i<n;i++){
		if(corredor[i].gettiempo() < time){
			
			time = corredor[i].gettiempo();
			indice = i;
		}
	}
	
	return indice;
}
