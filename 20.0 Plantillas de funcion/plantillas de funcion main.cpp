#include <stdlib.h>
#include <iostream>
#include "Mayor.h"
using namespace std;

int main(int argc, char** argv) {
	
	cout<<"El mayor de 2 numeros enteros es: "<<Mayor(5,9.76)<<endl;
	cout<<"El mayor de 2 numeros reales es: "<<Mayor(9.86,4.56)<<endl;
	cout<<"El mayor de 2 caracteres es: "<<Mayor('r','z')<<endl;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

