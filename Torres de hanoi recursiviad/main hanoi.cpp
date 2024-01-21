#include <iostream>
#include <stdlib.h>
using namespace std;

void hanoi(char, char, char, int);


int main(int argc, char** argv) {
	
	hanoi('A','B','C',16);
	
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void hanoi(char varInicial, char varCentral, char varFinal, int n){
	
	if(n==1){  //caso base
		cout<<"Mover disco "<<n<<" desde la varilla "<<varInicial<<
		" a varilla "<<varFinal<<endl;
	}
	else{	//caso recursivo
		hanoi(varInicial,varFinal,varCentral,n-1);
		cout<<"maver disco "<<n<<" desde la varilla "<<varInicial<<
		" a varilla "<<varFinal<<endl;
		hanoi(varCentral,varInicial,varFinal,n-1);
	}
}
