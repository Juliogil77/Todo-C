#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

void escribir();
void leer();

int main(){
	
		escribir();
		leer();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void escribir(){
	
	ofstream archivo;
	
	archivo.open("posicion.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir l archivo";
		exit(1);
		
	}
	//funcion para saber el posicionamiento del cursor mediante un numero entero que cuenta los caracteres
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;

	archivo<<"Hola como estas?";
	
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	
	archivo.close();
}

void leer(){
	
	ifstream archivo;
	
	archivo.open("posicion.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	string lineas;
	
	archivo.seekg(5);
	
	cout<<"Posicion actual: "<<archivo.tellg()<<endl;
	
	getline(archivo,lineas);
	
	cout<<lineas<<endl;
	
	archivo.close();
	
}
