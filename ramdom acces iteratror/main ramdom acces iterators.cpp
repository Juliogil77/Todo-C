#include <iostream>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

template <class Iter>
void mostrarEnPantalla(Iter inicio,Iter final){
	
	while (inicio != final){
		cout<<*inicio<<"|";
		inicio++;
	}
}

int main(int argc, char** argv) {
	
	vector <char> letras(10);		//creando vector de 10 elementos 
	//agregandole elementos aleatorios al vector
	for(int i=0;i<10;i++){
		letras[i] = 'A' + (rand() % 26);
	}
	
	//visualizar elementos del vectore
	
	mostrarEnPantalla(letras.begin(),letras.end());
	cout<<endl;
	//visualizar los elemtos del vector al revez
	
	mostrarEnPantalla(letras.rbegin(),letras.rend());
	cout<<endl;
	
	//visualizart los elementos del medio del vector (1-8
	
	mostrarEnPantalla(letras.begin()+1,letras.end()-1);
	cout<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

