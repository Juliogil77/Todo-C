#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

void escribir();
void leer();

struct Registro{
	char nombre[20];
	char apellido[20];
};

int main(){
	
	escribir();
	leer();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void escribir(){
	ofstream archivoB;
	
	archivoB.open("prueba.dat",ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se puede abrir el archivo";
		exit(1);
	}
	
	Registro persona;
	
	cout<<"pidiendo datos"<<endl;
	cout<<"Digite un nombre: "; cin.getline(persona.nombre,20,'\n');
	cout<<"Digite un apellido: ";cin.getline(persona.apellido,20,'\n');
	
	//Escribimos los datos en mi archivo binario
	archivoB.write((char *)&persona,sizeof(Registro));
	
	archivoB.close();
}
void leer(){
	ifstream archivoB;
	
	archivoB.open("prueba.dat",ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se puede abrir el archivo";
		exit(1);
	}
	
	Registro persona;
	
	archivoB.read((char *)&persona,sizeof(Registro));
	
	cout<<"\n\nMostrando los datos leidos\n";
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Apellido: "<<persona.apellido<<endl;
	
	archivoB.close();
	
}
