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

//funcion logica para calcular si un numero es par
template <class T>
bool esPar(T valor){
	return ((valor%2) == 0);
}

int main() {
	
	vector<int> valores(10);
	
	//generando numeros aleatorios y guardandolos en vector
	generate(valores.begin(),valores.end(),numerosAleatorios);
	
	//mostrar elementos en pantalla el vector
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	
	
	//nuevo vector para almacenar pares
	vector <int> pares;
	//iterador para recorrer vector valores
	vector<int>::iterator i = valores.begin();
	
	while((i = find_if(i,valores.end(),esPar<int>)) != valores.end()){
		
		pares.push_back(*i);
		i++;
	}
	sort(pares.begin(),pares.end());
	cout<<endl;
	//mostramos vector pares en pantalla
	copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));
	
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

