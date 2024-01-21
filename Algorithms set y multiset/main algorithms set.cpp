#include <iostream>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <set>	//para set y multiset
using namespace std;

int main() {
	
	
	// en el set y multiset no puedes a;adir valores duplicados
	
	set<int> valores;		//creando un conjunto de dqatos
	
	
	//insertando elementos en el set 
	valores.insert(5);
	valores.insert(3);
	valores.insert(10);
	valores.insert(1);
	valores.insert(15);
	
	//mostrar elementos en pantalla
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	// buscar y mostrar un elemento del set
	set<int>::iterator i = valores.find(3);
	
	if(i != valores.end()){
		cout<<"\nEl elemento "<<*i<<" si ha sido encontrado"<<endl; 
	}
	else{
		cout<<"\nEl elemento no ha sido encontrado"<<endl;
	}
	
	
	//eliminar un elemento del set (Conjunto)
	cout<<"\n\n";
	
	valores.erase(1);
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
