#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void menu();
void crearContacto();
void anadirContacto();
void verContactos();

struct Datos{
	string Nombre, apellido, telefono; 
}datos;

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
		cout<<"1.Crear (nombre, apellidos, telefono)\n";
		cout<<"2.Agregar mas contactos (nombre, apellidos, telefono)\n";
		cout<<"3.Visualizar contactos existentes\n";
		cout<<"4.Salir:\n\n";
		cout<<"Opcion: ";cin>>opc;
		
		switch(opc){
			
			case 1:
					crearContacto();
					cout<<"\n";
					system ("pause");					
			break;
			case 2:
					anadirContacto();
					cout<<"\n";
					system ("pause");	
			break;
			case 3:
					verContactos();
					cout<<"\n";
					system("pause");
			break;
		}
		system("cls");
	}while(opc!=4);
}
void crearContacto(){
	ofstream archivo;
	char opc;
	
	archivo.open ("AgendaTelefonica.txt",ios::out);	//abrir archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"\t\tAgenda Telefonica"<<endl;
	
	do{
		fflush(stdin);
		cout<<"Dame el nombre de la persona: ";
		getline(cin,datos.Nombre);
		fflush(stdin);
		cout<<"Dame el apellido de la persona: ";
		getline(cin,datos.apellido);
		fflush(stdin);
		cout<<"Dame el telefono de la persona: ";
		getline(cin,datos.telefono);
		fflush(stdin);
		
		archivo<<"Nombre: "<<datos.Nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea anadir mas contactos (s/n): ";
		cin>>opc;
		cout<<"\n\n";
	}while((opc=='s')||(opc=='S'));
	
	archivo.close();	//cerramos el archivo 
	
}
void anadirContacto(){
	
	ofstream archivo;
	char opc;
	
	archivo.open("AgendaTelefonica.txt",ios::app);	//abrir archivo en modo anadir 
	
	if(archivo.fail()){
		cout<<"El archivo no existe";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Dame el nombre de la persona: ";
		getline(cin,datos.Nombre);
		fflush(stdin);
		cout<<"Dame el apellido de la persona: ";
		getline(cin,datos.apellido);
		fflush(stdin);
		cout<<"Dame el telefono de la persona: ";
		getline(cin,datos.telefono);
		fflush(stdin);
		
		archivo<<"Nombre: "<<datos.Nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea anadir mas contactos (s/n): ";
		cin>>opc;
		cout<<"\n\n";
	}while((opc=='s')||(opc=='S'));
	
	archivo.close();		//cerramos archivo
}
void verContactos(){
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt",ios::in);	//abrir archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"El archivo no existe";
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();			//cerramos archivo
	
}

