#include <iostream>
#include <stdlib.h>
using namespace std;


//solucion recursiva
int sumaRecursiva(int n);
//solucion iterativa
int sumaIterativa(int n);

int main(int argc, char** argv) {
	int numero;
	cout<<"Digite un numero: ";
	cin>>numero;
	
	cout<<"\nLa suma de los dos digitos es: "<<endl;
	cout<<"Solucion recursiva: "<<sumaRecursiva(numero);
	cout<<"\nSolucion Iterativa: "<<sumaIterativa(numero);
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

int sumaRecursiva(int n){
	if(n<=9){//caso base
		return n;
	}
	else{//caso recursivo
		return sumaRecursiva(n/10) + n%10;
	}
}

int sumaIterativa(int n){
	int suma=0;
	
	while(n>9){
		suma += n%10;
		n /=10;
	}
	
	return (suma+n);
}
