#include <iostream>
#include <stdlib.h>
using namespace std;

const int N =5;
	int tablero [N][N];
	//desplazamientos relativos del caballo
	int d[8][2] = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

//prototipos de funcion
void escribirTablero();
void saltoCaballo(int i,int x,int y,bool &exito){
	int nx,ny;
	int k=0; // iterador para controlar los desplazamientos del caballo
	exito = false;
	
	do{
		k++;
		nx = x + d[k-1][0];
		ny = y + d[k-1][1];
		
		//verificando si las coordenadas son correctas
		
		if((nx>=0) && (nx<N) && (ny>=0) && (ny<N) && tablero[nx][ny] == 0){
			tablero [nx][ny] = i;
			escribirTablero();	//mostramos como se mueve el caballo
			
			if(i < N*N){
				saltoCaballo(i+1,nx,ny,exito);
				
				if( !exito ){
					tablero[nx][ny] = 0;
				}
			}
			else{
				exito = true;
			}
		}
		
	}while((k<8) && !exito);
}

int main(int argc, char** argv) {

	bool exito;
	int fila = 2;
	int col = 2;
	
	tablero[fila][col] = 1;
	
	saltoCaballo(2,fila,col,exito);
	
	if(exito){ 	 //verdadero
		
		cout<<"Camino encontrado"<<endl;
		escribirTablero();
		
	}
	else{
		cout<<"Camino no encontrado"<<endl;
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void escribirTablero(){
	int i,j;
	
	for(i=0;i<N;i++){
		for(j=0;i<N;j++){
			
			cout<<tablero[i][j]<<"|";
		}
		cout<<"\n\n";
	}
}

