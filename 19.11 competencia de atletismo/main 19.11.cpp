#include <iostream>
#include <stdlib.h>
#include "Atleta.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Atleta *corredor;
	int nAtletas,noAtleta,indiceWin;
	string nombre;
	float tiempo;
	
	cout<<"Dame el numero de Atletas de la competicion: ";cin>>nAtletas;
	
	corredor = new Atleta[nAtletas];
	
	for(int i=0;i<nAtletas;i++){
		
		cout<<"\t\tCorredor "<<i+1<<"\n\n";
		cout<<"Numero de atleta: ";cin>>noAtleta;
		fflush(stdin);
		cout<<"Nombre: ";getline(cin,nombre);
		cout<<"Tiempo: ";cin>>tiempo;
		
		corredor[i] = Atleta(noAtleta,nombre,tiempo);
	}
	
	indiceWin = Atleta::indiceMtiempo(corredor,nAtletas);
	
	cout<<"t\tEl atleta ganador es\n\n ";
	(corredor+indiceWin)->mostrarDatos();
	
	delete[] corredor;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
