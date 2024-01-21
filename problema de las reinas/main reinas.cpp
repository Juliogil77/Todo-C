#include <iostream>
#include <stdlib.h>
using namespace std;

//prototipos de funciones

void ponerReinas(int,bool &);
bool valido(int);
void mostrarTablero();


const int N = 12;

int reinas[N];


int main(int argc, char** argv) {
	
	bool solucion;
	ponerReinas(0,solucion);
	
	if(solucion){
		cout<<"Si existe combinacion de reinas"<<endl;
		mostrarTablero();
	}
	else{
		cout<<"No existe combinacion de reinas"<<endl;
	}
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

void ponerReinas(int i,bool &solucion){
	
	int k=0;	//inicializamos el conteo de movimientos
	solucion = false;
	do{
		
		reinas[i]=k;	//copiamos la reina i en la fila k
		k++;
		
		mostrarTablero();
		
		if(valido(i)){
			if(i<(N-1)){
				
				ponerReinas(i+1,solucion);
				
				//vuelta atras
				
				if(!solucion){
					reinas[i]=0;
				}
				
			}
			else{
				solucion = true;
			}
		}
		
	}while(!solucion && (k<N));
	
}

bool valido(int i){		//comprobar si la reina de la columna y no se amenaza con ninguna reina ya puesta
	
	bool v=true;
	
	for(int r=0;r<i;r++){
		v = v && (reinas[i] != reinas[r]); //combrobar si la fila esta vacia
		v = v && ((reinas[i]-i) != (reinas[r]-r)); //combrobar diagonal 1
		v = v && ((reinas[i]+i) != (reinas[r]+r));//comprobar diagonal 2
		
	}
	return v;	
}

void mostrarTablero(){
	int tablero [N][N];
	
	//asignar valores del tablero a 0
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			tablero[i][j] = 0;
		}
	}
	
	cout<<"Mostarndo arreglo de reians"<<endl;
	for(int i=0;i<N;i++){
		cout<<reinas[i]<<"|";
	}
	
	cout<<endl;
	
	//ahora asignamos el valor del arreglo hasta el tablero 
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			tablero[reinas[j]][j] = 1;
		}
	}
	
	cout<<"Mostrando tablero con reinas"<<endl;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<tablero[i][j]<<"|";
		}
		cout<<endl;
	}
	
	cout<<endl;
}
