#include <iostream>
#include <stdlib.h>
using namespace std;
struct Etapa{
	int horas,min,seg;
}etapa, *etapapun = &etapa;

void pedirdatos();
void sumaetapas(Etapa *,int&,int&,int&);

int main(){
	
	int horast=0,mint=0,segt=0; 
	
	pedirdatos();
	sumaetapas(etapapun,horast,mint,segt);
	
	cout<<"El tiempo total de la etapa es de: "<<horast<<" : "<<mint<<" : "<<segt;
	
	delete [] etapapun;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirdatos(){
	
	etapapun = new Etapa[3];
	
	for(int i=0;i<3;i++){
		cout<<"Horas de la etapa "<<i+1<<": ";cin>>(etapapun+i)->horas;
		cout<<"Minutos de la etapa "<<i+1<<": ";cin>>(etapapun+i)->min;
		cout<<"segundos de la etapa "<<i+1<<": ";cin>>(etapapun+i)->seg;
		cout<<"\n\n";
		fflush(stdin);
	}
}
void sumaetapas(Etapa *etapapun,int &horast,int &mint,int &segt){
	
	for(int i=0;i<3;i++){
		
		horast += (etapapun+i)->horas;
		mint += (etapapun+i)->min;
		if(mint>=60){
			mint-=60;
			horast++;
		}
		segt += (etapapun+i)->seg;
		if(segt>=60){
			segt-=60;
			mint++;
		}
	}
	
}
