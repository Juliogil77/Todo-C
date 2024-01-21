#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

void menu();
void escribirpulsacion();
void anadirpulsacion();
void mostrarpulsacion();

struct Registro{
	float hora;
	int pulso;	
};

int main(){
	
	menu();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void menu(){
	
	int opc;
	
	do{
		cout<<"\t\tMENU\n\n";
		cout<<"1.Comenzar a digitar las pulsaciones\n";
		cout<<"2.Anadir mas pulsaciones\n";
		cout<<"3.Mostrar las pulsaciones registradas\n";
		cout<<"4.Salir\n\n";
		cout<<"Opcion: ";cin>>opc;
		
		switch(opc){
			
			case 1:
					escribirpulsacion();
			break;
			case 2:
					anadirpulsacion();
			break;
			case 3:
					mostrarpulsacion();
			break;
			case 4:
					break;
			default:
			cout<<"Se equivoco de opcion, intentelo nuevamente\n";	
		}
		system ("pause");
		system ("cls");
		fflush(stdin);
	}while(opc!=4);
}

void escribirpulsacion(){
	
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"El archivo no se pudo abrir";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"Dame la hora exacta: ";cin>>pulso.hora;
	cout<<"Dame las pulsaciones: ";cin>>pulso.pulso;
	
	archivoB.write((char *)&pulso,sizeof(Registro));
	
	archivoB.close();
	
}
void anadirpulsacion(){
	
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"Dame la hora exacta: ";cin>>pulso.hora;
	cout<<"Dame las pulsaciones: ";cin>>pulso.pulso;
	
	archivoB.write((char *)&pulso,sizeof(Registro));
	
	archivoB.close();
}
void mostrarpulsacion(){
	ifstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\t\tMostrando pulsaciones registradas\n\n";
	while(!archivoB.eof()){	//mientras no haya finalizado de recorrer mi archivo
		archivoB.read((char *)&pulso,sizeof(Registro));
		
		if(!archivoB.eof()){
			cout<<"Hora: "<<pulso.hora<<endl;
			cout<<"Pulsaciones: "<<pulso.pulso<<endl<<endl;
		}
	}
	
	archivoB.close();
}

