

/*Asignacion dinamica de arreglos 

new:reserva el numero de bytes solicitado por la declaracion
delete: libera un bloque de bytes reservado con anterioridad

ejemplo:Pedir al usuario n calificaciones y almacenarlos en un arreglo dinamico
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCal, *calif;//variables globales

int main(){
	
	pedirNotas();
	mostrarNotas();
	
	delete [] calif; //liberando el espacio en bytes utilizados anteriormente 
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void pedirNotas(){
	
	cout<<"Digite el numero de calificaciones:";cin>>numCal;
	
	calif = new int [numCal];//crear arreglo
	
	for(int i=0;i<numCal;i++){
		
		cout<<"Dame la nota "<<i+1<<": ";cin>>calif[i];
	}  
}
void mostrarNotas(){
	
	for(int i=0;i<numCal;i++){
		cout<<"La nota "<<i+1<<" es: "<<calif[i]<<endl;
	}
	
}
