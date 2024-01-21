#include <iostream>
#include <stdlib.h>
using namespace std;

int busquedaBinaria(int[],int,int,int);

int main(int argc, char** argv) {
	
	int arreglo[] = {3,4,5,8,9,10};
	int dato = 7;
	
	int retorno = busquedaBinaria(arreglo,dato,0,5);
	
	if(retorno==-1){
		cout<<"El elemento no ha sido encontrado"<<endl;
	}
	else{
		cout<<"El elemento ha sido encontrado en la posicion del arreglo: "<<retorno<<endl;
	}
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
	
}

int busquedaBinaria(int a[],int dato,int inferior,int superior){
	int mitad;
	
	if(inferior > superior){	//no encontrado
		return -1;
	}
	else{
		
		mitad = (inferior+superior)/2;
		
		if(dato == a[mitad]){				//caso base
			return mitad;
		}
		else{
			if(dato > a[mitad]){
				return busquedaBinaria(a,dato,mitad+1,superior);
			}
			else{
				return busquedaBinaria(a,dato,inferior,mitad-1);
			}
			
		}
	}
	
}
