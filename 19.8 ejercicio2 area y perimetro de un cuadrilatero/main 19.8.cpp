#include <iostream>
#include <stdlib.h>
#include "Cuadrilatero.h"

using namespace std;

int main(int argc, char** argv) {
	Cuadrilatero *o1;
	float l1,l2;
	
	cout<<"Digite el l1: ";
	cin>>l1;
	cout<<"Digite el l2: ";
	cin>>l2;
	
	if(l1==l2){
		o1 = new Cuadrilatero(l1);
	}
	else{
		o1 = new Cuadrilatero(l1,l2);
	}
	
	
	cout<<"El Perimetro es: "<<o1->obtenerPerimetro()<<endl;
	cout<<"El Area es: "<<o1->obtenerArea()<<endl<<endl;
	
	
	
	cout<<"\n\n";
	system("pause");	
	return 0;
}
