#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

class Tiempo{
	
	private:
		int horas,minutos,segundos;
	public:
		Tiempo(int,int,int);		//constructor 1
		Tiempo(long);
		void mostrarHora();
};
Tiempo::Tiempo(int _horas,int _minutos, int _segundos){		//constructor 1
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}
void Tiempo::mostrarHora(){
	cout<<"El tiempo utilizado fue: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

Tiempo::Tiempo(long _segundos){
	
	horas = int(_segundos/3600);
	_segundos %= 3600;
	minutos = int(_segundos/60);
	segundos = int(_segundos%60);
}

int main(){
	
	Tiempo ejercicio(16,23,30);
	Tiempo correr(55410);
	
	ejercicio.mostrarHora();
	correr.mostrarHora();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}

