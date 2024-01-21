#include <iostream>
#include <stdlib.h>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHervivoro.h"
using namespace std;
int main(int argc, char** argv) {
	
	//onjeto de tipo planta
	
	Planta *planta1 = new Planta();
	
	planta1->alimentarse();
	
	//objeto de tipo animal carnivoro
	
	AnimalCarnivoro *animal1 = new AnimalCarnivoro();
	
	animal1->alimentarse();
	
	//objeto de tipo animal hervivoro 
	
	AnimalHervivoro *animal2 = new AnimalHervivoro();
	
	animal2->alimentarse();
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
