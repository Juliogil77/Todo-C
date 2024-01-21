#include <iostream>
#include <stdlib.h>
#include "Persona.h"


int main(int argc, char** argv) {
	
	Persona *persona1 = new Persona ("Alejandro",21);
	
	persona1->correr();
	
	Persona *persona2 = new Persona ("09110720Y");
	persona2->correr(4);
	
	
	system ("pause");
	return 0;
}
