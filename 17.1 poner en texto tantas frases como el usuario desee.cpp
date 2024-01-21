#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>;
using namespace std;

void escribir();

int main(){

	escribir();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void escribir(){
	
	char opc;
	ofstream archivo;
	string nombreArchivo,frase;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	//abriendo archivo
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	cout<<"\n\n";
	//codigo para poner tantas frases como quiera el usuario
	do{
		cout<<"Digite una frase para guardar:\n ";
		getline(cin,frase);
		archivo<<frase<<endl;
		cout<<"\n\nDesea agregar otra frase? (s/n): ";
		cin>>opc;
		fflush(stdin);
		system("cls");
		
		
	}while((opc=='s')||(opc=='S'));
	
	//cerrando archivo
	archivo.close();
}

