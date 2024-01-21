#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>
using namespace std;

//funcion para generar valores aleatorios
int numerosAleatorios(){
	return rand()%30;
}

int main() {
	
	vector<int> valores(10);
	
	//generando numeros aleatorios y guardandolos en vector
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	//mostrar elementos en pantalla el vector
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	
	

	return 0;
}
