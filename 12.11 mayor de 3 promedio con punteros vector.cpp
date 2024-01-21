#include <iostream>
#include <stdlib.h>
using namespace std;

struct alumnos{
	char nombre [30];
	int edad;
	float prom;
}personas,*personapun = &personas;

int const ncal=3;

void pedirdatos();
void mayorprom(alumnos *,int,int &);


int main(){
	
	int mayor=0;
	
	pedirdatos();
	mayorprom(personapun,ncal,mayor);
	
	cout<<"El mayor promedio de los estudiantes es: "<<mayor;
	
	delete [] personapun;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirdatos(){
	
	personapun = new alumnos [ncal];// asignando vector dinamico
	
	for(int i=0;i<ncal;i++){
		cout<<"Dame el nombre "<<i+1<<": ";
		cin.getline((personapun+i)->nombre,30,'\n');
		cout<<"Dame la edad "<<i+1<<": ";
		cin>>(personapun+i)->edad;
		cout<<"Dame el promedio "<<i+1<<": ";
		cin>>(personapun+i)->prom;
		cout<<"\n\n";
		fflush(stdin);
	}
	
}
void mayorprom(alumnos *personapun,int ncal,int &mayor){
	
	for(int i=0;i<ncal;i++){
		
		if((personapun+i)->prom>mayor){
			mayor = (personapun+i)->prom;
		}
	}
}
