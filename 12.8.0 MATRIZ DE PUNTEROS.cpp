#include <iostream>
#include <stdlib.h>
using namespace std;

 //prototipos de funcion 
 void pedirdatos();
 void mostrarmatriz(int **,int,int);
 
 int **puntero_matriz,nfilas,ncol;
 
int main(){
	
	pedirdatos();
	mostrarmatriz(puntero_matriz,nfilas,ncol);
	
	//liberar  la memoria que hemos utilizado
	
	for(int i=0;i<nfilas;i++){
		
		delete[] puntero_matriz[i];
	}
	
	delete [] puntero_matriz;
	
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
void pedirdatos(){
	cout<<"Digite el numero de filas: ";cin>>nfilas;
	cout<<"Digite el numero de columnas: ";cin>>ncol;
	
	//reservar memoria para la matriz dinamica
	puntero_matriz = new int *[nfilas];//reservando memoria para las filas
	for(int i=0;i<nfilas;i++){
		puntero_matriz[i] = new int[ncol];//reservando memoria para las columnas 
	}
	
	cout<<"\n\nDigitando elementos de la matriz\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:";
			cin>>*(*(puntero_matriz+i)+j); //puntero_matriz[i][j]
		}
	}
}
void mostrarmatriz(int **puntero_matriz,int nfilas,int ncol){
	cout<<"\n\nImprimiendo matriz\n";
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";  // puntero_matriz[i][j]
		}
		cout<<"\n";
	}
	
	
}
