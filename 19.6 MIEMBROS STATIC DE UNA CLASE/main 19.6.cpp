#include <iostream>
#include <stdlib.h>
#include "Estatico.h"

using namespace std;

int main(int argc, char** argv) {
	
	Estatico *objeto1 = new Estatico();
	Estatico *objeto2 = new Estatico();
	Estatico *objeto3 = new Estatico();
	
	cout<<objeto1->getContador()<<endl;
	
	cout<<"La suma es: "<<Estatico::sumar(4,5);
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
