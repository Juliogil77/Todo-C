#include <iostream>
#include <stdlib.h>

using namespace std;

//prototipos de funcion
void funcionA(char);
void funcionB(char);

int main(int argc, char** argv) {
	
	cout<<"Alfabeto: ";
	funcionA('Z');
	
	
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}

void funcionA(char letra){
	
	if(letra>'A'){
		funcionB(letra);
	}
	
	cout<<letra<<" ";
}
void funcionB(char letra){
	funcionA(--letra);
}
