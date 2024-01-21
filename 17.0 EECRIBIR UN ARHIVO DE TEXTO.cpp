#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir();

int main (){
	
	escribir();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void escribir(){
	ofstream archivo;
	string nombreArchivo, frase;
	
	//preguntando nombre del archivo al usuario
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out); //abriendo el archivo 
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	
	//preguntando al usuario el texto que desee
	cout<<"Digite el texto del archivo: \n";
	getline(cin,frase);
	
	archivo<<frase;
	
	archivo.close();
}

