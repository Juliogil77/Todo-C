#include <iostream>

using namespace std;

template <typename T>
void intercambio(T &dato1,T &dato2){
	T aux;
	aux = dato1;
	dato1 = dato2;
	dato2 = aux;
}
