//correspondencia entre arrays y punteros 
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	
	int numeros[] = {1,2,3,4,5};
	int *iDir_numeros;
	
	iDir_numeros = numeros; // es como si se pusiera &numeros[0]
	
	for (int i=0; i<5;i++){
		cout<<"Direccion de memoria "<<numeros[i]<<" es: "<<iDir_numeros++<<endl;
	}
	cout<<"\n\n\n";
	system ("pause");
	return 0;
}
