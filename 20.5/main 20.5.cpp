#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Medico.h"
#include "Entrenador.h"
using namespace std;
//prototipos de funcion
void Menu();
void ViajarE();
void EntrenamientoE();
void PartidoE();
void PlanificarP();
void EntrevistaJ();
void CurarLesion();
	
//arreglo global de clase Persona y subclases 
Persona *equipo[4];

int main(int argc, char** argv) {
	
	equipo [0] = new Futbolista("Ean","Michelle",7,9,"Delantero");
	equipo [1] = new Futbolista("Juan","Gil",15,7,"Portero");
	equipo [2] = new Entrenador("Julio","Ayala",19,"Defensiva");
	equipo [3] = new Medico("Paula","Barragan",27,"Fisioterapeuta",5);
	
	//Menu
	Menu();
	
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void Menu(){
	int opc;
	
	do{
			cout<<"\t\tMENU\n\n";
			cout<<"1.Viaje en equipo"<<endl;
			cout<<"2.Entrenamiento"<<endl;
			cout<<"3.Partido de futbol"<<endl;
			cout<<"4.Planificar entrenamiento"<<endl;
			cout<<"5.Entrevista"<<endl;
			cout<<"6.Curar lesion"<<endl;
			cout<<"7.Salir"<<endl<<endl;
			cout<<"Opcion: ";cin>>opc;
			cout<<"\n\n";
			
			switch(opc){
				case 1:	//viaje en equipo
					ViajarE();
				break;
				
				case 2:	//entrenamiento
					EntrenamientoE();
				break;
				
				case 3:	//partido de futbol
					PartidoE();
				break;
				
				case 4:	//planificar entrenamiento
					PlanificarP();
				break;
				
				case 5:	//entrevista
					EntrevistaJ();
				break;
				
				case 6:	//curar lesion
					CurarLesion();
				break;
				
				case 7: break;	//salir
				
				default:
					cout<<"Opcion incorrecta intentelo de nuevo"<<endl;
					
			}
			
			cout<<endl;
			system ("pause");
			system("cls");
			
	}while(opc!=7);
}

void ViajarE(){
	
	for(int i=0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		equipo[i]->viajar();
	}
}

void EntrenamientoE(){
	
	for(int i=0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		equipo[i]->entrenamiento();
	}
}

void PartidoE(){
	
	for(int i=0;i<4;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		equipo[i]->partido();
	}
}
void PlanificarP(){
	cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" -> ";
	//hacer que un arreglo polimorfico acceda a los metodos exclusivosa de la clase hija
	((Entrenador *)equipo[2])->planificarEntrenamiento();
}
void EntrevistaJ(){
	
	for(int i=0;i<2;i++){
		cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> ";
		((Futbolista *)equipo[i])->entrevista();
	}
}
void CurarLesion(){
	
	cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" -> ";
	//hacer que un arreglo polimorfico acceda a los metodos exclusivosa de la clase hija
	((Medico *)equipo[3])->curarLesion();
	
}
