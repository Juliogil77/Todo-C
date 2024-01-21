#include <iostream>
#include "DiaAno.h"

using namespace std;

//comprobamos la igualdad en las fechas 
bool DiaAno::igual(DiaAno& d){
	if(dia == d.dia && mes == d.mes){
		return true;
	}
	else{
		return false;
	}
}

void DiaAno::visualizar(){
	
	cout<<"\t\tMostrando los datos\n\n";
	cout<<"Mes: "<<mes<<"\nDia: "<<dia<<endl;
}
