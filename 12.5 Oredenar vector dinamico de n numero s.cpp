#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirdatos();
void ordenamiento(int *,int);
void mostrardatos();

int *vector, elementos;

int main(){
	
	pedirdatos();
	ordenamiento(vector,elementos);
	mostrardatos();
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void pedirdatos(){
	
	cout<<"Dame el numero de elementos del vector: ";cin>>elementos;
	
	vector = new int[elementos];
	
	for(int i=0;i<elementos;i++){
		cout<<"Dame el elemento ["<<i+1<<"]: ";cin>>*(vector+i); //vector[i];
	}
}
void ordenamiento(int *vector, int elementos){
	
int aux;
	
	for(int i=0;i<elementos;i++){
		for(int j=0;j<elementos;j++){
			if(*(vector+j) > *(vector+j+1)){
				aux = *(vector+j);
				*(vector+j) = *(vector+j+1);
				*(vector+j+1) = aux;
			}
		}
	}
	
	
	
	
	
}
void mostrardatos(){
	for(int i=0;i<elementos;i++){
		cout<<vector[i]<<" ";
	}
}
