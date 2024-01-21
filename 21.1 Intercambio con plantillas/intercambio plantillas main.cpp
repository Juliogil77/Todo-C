#include <iostream>
#include <stdlib.h>
#include "intercambio.h"
using namespace std;

int main(int argc, char** argv) {
	
	int n1=6,n2=10;
	float n3=7.87,n4=4.76;
	char a='f',b='h';
	
	cout<<"enteros"<<endl;
	cout<<"n1: "<<n1<<endl;
	cout<<"n2: "<<n2<<endl;
	cout<<"flotantes"<<endl;
	cout<<"n3: "<<n3<<endl;
	cout<<"n4: "<<n4<<endl;
	cout<<"caracteres"<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl<<endl;
	
	cout<<"Intercambio de valores del mismo tipo"<<endl<<endl;
	
	intercambio(n1,n2);
	intercambio(n3,n4);
	intercambio(a,b);
	
	cout<<"enteros"<<endl;
	cout<<"n1: "<<n1<<endl;
	cout<<"n2: "<<n2<<endl;
	cout<<"flotantes"<<endl;
	cout<<"n3: "<<n3<<endl;
	cout<<"n4: "<<n4<<endl;
	cout<<"caracteres"<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl<<endl;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
