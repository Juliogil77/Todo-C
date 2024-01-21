#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Fecha{
	private:				//atributos
		int dia, mes, ano;
	public:					//metodos
		Fecha(int,int,int);	//constructor 1
		Fecha(long);			//constructor 2
		void mostrarFecha();	
};
Fecha::Fecha(int _dia,int _mes,int _ano){	//constructor 1
	dia = _dia;
	mes = _mes;
	ano = _ano;
}

Fecha::Fecha(long fecha){					//constructor 2
	ano = int(fecha/10000);					//extraer mes
	mes = int((fecha-ano*10000)/100);		//extraer dia 
	dia = int(fecha-ano*10000-mes*100);
}

void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
}

int main(){
	
	Fecha hoy(9,1,2017);
	Fecha ayer(20170108);
	
	hoy.mostrarFecha();
	ayer.mostrarFecha();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}

