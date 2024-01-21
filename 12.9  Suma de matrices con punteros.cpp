#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirdatos1();
void pedirdatos2();
void suma_matrices(int **,int, int,int **,int, int);
void liberarespacio(int **,int, int,int **,int, int);

int **Matriz1,Filas1,Col1;
int **Matriz2,Filas2,Col2;
int **Matriz3;
int main(){
	
	pedirdatos1();
	pedirdatos2();
	suma_matrices(Matriz1,Filas1,Col1,Matriz2,Filas2,Col2);
	liberarespacio(Matriz1,Filas1,Col1,Matriz2,Filas2,Col2);

	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirdatos1(){
	
	cout<<"Dame el numero de filas de la Matriz1: ";cin>>Filas1;
	cout<<"Dame el numero de columnas de la Matriz1: ";cin>>Col1;
	
	//Creando matriz dinamica de matriz1
	Matriz1 = new int *[Filas1];
	for(int i=0;i<Filas1;i++){
		Matriz1 [i] = new int [Col1];
	}
	//Pidiendo datos de la matriz1
	for(int i=0;i<Filas1;i++){
		for(int j=0;j<Col1;j++){
			cout<<"Dame la posicion de Matriz 1 ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(Matriz1+i)+j);
		}
	}
}
void pedirdatos2(){
	
	cout<<"\nDame el numero de filas de la Matriz2: ";cin>>Filas2;
	cout<<"Dame el numero de columnas de la Matriz2: ";cin>>Col2;
	
	//Creando matriz dinamica de matriz1
	Matriz2 = new int *[Filas2];
	for(int i=0;i<Filas2;i++){
		Matriz2 [i] = new int [Col2];
	}
	//Pidiendo datos de la matriz1
	for(int i=0;i<Filas2;i++){
		for(int j=0;j<Col2;j++){
			cout<<"Dame la posicion de Matriz 1 ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(Matriz2+i)+j);
		}
	}
	
}
void suma_matrices(int **Matriz1,int Filas1, int Col1,int **Matriz2,int Filas2,int Col2){
	if((Filas1==Filas2)&&(Col1==Col2)){
		
		//declaranto matriz 3 como vector dinamico
		Matriz3 = new int *[Filas1];
		for(int i=0;i<Filas1;i++){
			Matriz3 [i] = new int [Col1];																																											
		}
		
		//haciendo Matriz3 = Matriz1 + Matriz2
		
		for(int i=0;i<Filas1;i++){
			for(int j=0;j<Col1;j++){
				*(*(Matriz3+i)+j) = *(*(Matriz1+i)+j) + *(*(Matriz2+i)+j);
			}
		}
		
		cout<<"El resultado de la suma de Matriz1 y Matriz2 es:\n ";
		
		for(int i=0;i<Filas1;i++){
			for(int j=0;j<Col1;j++){
				cout<<*(*(Matriz3+i)+j)<<" ";
			}
			cout<<"\n";
		}
	}
	else{
		cout<<"\nNo se puede realizar la suma de matrices debido a que tienen diferente numero de filas o columnas";
	}
}
void liberarespacio(int **Matriz1,int Filas1, int Col1,int **Matriz2,int Filas2,int Col){
	
	//Liberando espacio en memoria
	for(int i=0;i<Filas1;i++){
		delete[] Matriz1[i];
	}
	delete Matriz1;
	
	for(int i=0;i<Filas2;i++){
		delete[] Matriz2[i];
	}
	delete Matriz2;
	
	//liberar espacio en memoria de Matriz3
	
	if((Filas1==Filas2)&&(Col1==Col2)){
		
		for(int i=0;i<Filas1;i++){
			delete[] Matriz3[i];
		}
		delete[] Matriz3;	
	}	
}
