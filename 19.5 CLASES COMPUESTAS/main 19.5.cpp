#include <iostream>
#include <stdlib.h>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv) {
	
	Estudiante *estudiante1 = new Estudiante("34FG",15.16,56,"Calle las palmas #765");
	
	estudiante1->mostrarDatos();
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
