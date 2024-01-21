#include <iostream>
#include <stdlib.h>
using namespace std;
void pedirdatos();
void buscarnum(int *,int);

int *vector,elementos;

int main(){
	
	pedirdatos();
	buscarnum(vector,elementos);
	
	delete[] vector;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirdatos(){
	
	cout<<"Dame el numero de elementos del vector: ";cin>>elementos;
	
	vector = new int[elementos];
	
	for(int i=0;i<elementos;i++){
		
		cout<<"Dame el elemento ["<<i<<"]: ";cin>>*(vector+i);
		
	}
}
void buscarnum(int *vector,int elementos){
	int num,i;
	bool band = false;
	cout<<"\nDame el numero que deseas buscar en el vector: ";cin>>num;
	
	i = 0;
	while((band == false)&&(i<elementos)){
		if(*(vector+i)==num){
			band = true;
		}	
		else{
			i++;
		}
	}
	
	if(band==false){
		
		cout<<"El numero no existe en el arreglo";
	}
	else{
		cout<<"El numero esta en la posicion "<<i;
	}
}


