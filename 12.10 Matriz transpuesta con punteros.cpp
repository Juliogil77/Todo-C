#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirdatos();
void matriztras(int **,int **,int,int);

int **Matriz1,Filas,Col;
int **Matriz2;

int main(){
	
	pedirdatos();
	matriztras(Matriz1,Matriz2,Filas,Col);
	
	for(int i=0;i<Filas;i++){
		delete [] Matriz1[i];
	}
	delete Matriz1;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirdatos(){
	
	cout<<"Dame el numero de filas de la matriz: ";cin>>Filas;
	cout<<"Dame el numero de columnas de la matriz: ";cin>>Col;
	
	//creando vector dinamico de Matriz1
	Matriz1 = new int *[Filas];
	for(int i=0;i<Filas;i++){
		
		Matriz1[i]= new int [Col];
	}
	//pidiendo datos de Matriz1
	for(int i=0;i<Filas;i++){
		for(int j=0;j<Col;j++){
			cout<<"Dame la posicion ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(Matriz1+i)+j);
		}
	}

	//mostrando matriz original
	
	cout<<"\nLa matriz original es:\n\n ";
	for(int i=0;i<Filas;i++){
		for(int j=0;j<Col;j++){
			cout<<*(*(Matriz1+i)+j)<<" ";
		}
		cout<<endl;
	}
}
void matriztras(int **matriz1,int **Matriz2,int Filas,int Col){
	
	//creando vector dinamico de Matriz2
	Matriz2 = new int *[Filas];
	for(int i=0;i<Filas;i++){
		
		Matriz2[i] = new int [Col]; 
	}
	
	cout<<"\n\nLa matriz transpuesta es:  \n\n";
	for(int i=0;i<Filas;i++){
		for(int j=0;j<Col;j++){
			//haciendo que matriz2 sea la transpuesta de matriz1
			*(*(Matriz2+i)+j) = *(*(Matriz1+j)+i);
			//imprimiendo la matriz transpuesta
			cout<<*(*(Matriz2+i)+j)<<" ";
		}
		cout<<endl;
	}
}
	


