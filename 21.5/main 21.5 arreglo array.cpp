#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"
using namespace std;

void opciones();

int main(int argc, char** argv) {
	
	Arreglo <int> arreglo1(5);
	int opc;
	int elemento;
	
	do{
		opciones();
		cout<<"Opcion: ";cin>>opc;
		switch(opc){
			
			case 1:
					if(arreglo1.arregloLleno()){
						cout<<"El arreglo esta lleno, no puede agregar mas elementos"<<endl;
					}
					else{
						cout<<"Digite un elemento a agregar: ";cin>>elemento;
						arreglo1.agregar(elemento);
					}
			break;
			case 2:
					if(arreglo1.arregloLleno()){
						cout<<"El arreglo esta lleno"<<endl;
					}
					else{
						cout<<"El arreglo aun no esta lleno"<<endl;
					}
			break;
			case 3:
					cout<<"Los elementos del arreglo son: "<<endl;
					arreglo1.mostrarArreglo();
			break;
			case 4:
				cout<<"Vaciando el arreglo"<<endl;
				arreglo1.vaciarArreglo();
			break;
			
			case 5:
				
			break;
			default:
				cout<<"Opcion equivocada intentelo nuevamente"<<endl;
		}
		system ("pause");
		system ("cls");
		
		
	}while(opc!=5);
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

void opciones(){
		cout<<"\t\tMENU\n\n";
		cout<<"1.Agregar un nuevo elemento al arreglo"<<endl;
		cout<<"2.Comprobar el espacio en el arreglo"<<endl;
		cout<<"3.Ver arreglo"<<endl;
		cout<<"4.Vaciar arreglo"<<endl;
		cout<<"5.Salir"<<endl<<endl;
}
