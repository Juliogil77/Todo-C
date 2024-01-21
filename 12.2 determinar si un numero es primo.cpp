#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	int iNumero,*iPosnum,iContador=0;
	
	cout<<"Dame un numero: ";cin>>iNumero;
	
	iPosnum = &iNumero;
	
	for(int i=1;i<=*iPosnum;i++){
		if(*iPosnum%i==0){
			iContador++;
		}
	}
	
	if(iContador==2){
		cout<<"El numero "<<*iPosnum<<" es primo y su posicion de memoria es: "<<iPosnum;
	}
	else{
		cout<<"El numero "<<*iPosnum<<" no es primo y su posicion de memoria es: "<<iPosnum;
	}
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
