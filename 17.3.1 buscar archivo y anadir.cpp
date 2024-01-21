#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void anadir();

int main(){

	anadir();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void anadir(){
	ofstream archivo;
	string texto,nombreArchivo;
	char opc;
	
	cout<<"Dame el nombre del archivo a anadir texto: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::app);	//abriendo archivo en modo anadir texto
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		cout<<"Digite el texto que quiere anadir: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		cout<<"\nDesea anadir mas texto (s/n): ";
		cin>>opc;
		fflush(stdin);
		system("cls");
		
	}while((opc=='s')||(opc=='S'));
	
	archivo.close();	
}

