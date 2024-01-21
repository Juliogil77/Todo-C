#include <iostream>
#include <stdlib.h>
#include "DiaAno.h"

using namespace std;

int main(int argc, char** argv) {
	
	DiaAno *hoy;
	DiaAno *cumple;
	int d,m;
	
	cout<<"Introduzca la fecha de hoy, dia: ";
	cin>>d;
	cout<<"Introduzca el numero de mes: ";
	cin>>m;
	
	//creando clase dinamica 1
	hoy = new DiaAno(d,m);
	
	cout<<"\n\nIntroduzca la fecha de su cumpleanos, dia: ";
	cin>>d;
	cout<<"Introduzca el numero de mes: ";
	cin>>m;
	
	//creando clase dinamica 2	
	cumple = new DiaAno(d,m);
	
	//mostrando fechas 
	hoy->visualizar();
	cout<<endl;
	cumple->visualizar();
	
	//comprobando si las fechas son iguales 
	
	if(hoy->igual(*cumple)){
		cout<<"\nFeliz cumpleanos\n";
	}
	else{
		cout<<"\nQue tenga un buen dia\n";
	}
	
	system ("pause");
	return 0;
}
