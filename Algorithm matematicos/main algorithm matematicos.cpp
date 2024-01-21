#include <iostream>
#include <cstdlib>
#include <iterator>
#include <vector>
#include <algorithm>
#include <fstream>
#include <numeric>	//funcion accumulate
using namespace std;

//funcion logica para comprobar si un numero es positivo

template <class T>
bool esPositivo(T valor){
return (valor >= 0);
}

int main() {
	
	vector<float> numeros;
	
	//abrimos el archivo de texto en modo lectura
	ifstream archivo("archivoNumerico.txt",ios::in);
	
	//copiamos todos los elementos del archivo hacia el vector numeros
	copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros));
	
	//calculamos el maximo y minimo de los elementos del vector 
	cout<<"Maximo: "<<*max_element(numeros.begin(),numeros.end())<<endl;
	cout<<"Minimo: "<<*min_element(numeros.begin(),numeros.end())<<endl;
	
	//calculamos el valor promedio de los elementos del vector 
	
	cout<<"\nValor promedio: "
	<<accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size()<<endl;
	
	//calcular el conteo de los numeros positivos 
	cout<<"Cantidad de numeros positivos: "
	<<count_if(numeros.begin(),numeros.end(),esPositivo<float>)<<endl;
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
