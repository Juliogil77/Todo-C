#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int iNumero,*iDirnum;
	
	cout<<"Dame el numero: ";cin>>iNumero;
	
	iDirnum = &iNumero; // guardando la posicion de memoria
	
	if(*iDirnum%2==0){
		cout<<"El numero "<<*iDirnum<<" es par"<<"\nPosicion de memoria: "<<iDirnum;
	}
	else{
		cout<<"El numero: "<<*iDirnum<<" es impar"<<"\nPosicion de memoria: "<<iDirnum;
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

