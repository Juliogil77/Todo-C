#include <iostream>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <set>	//para set y multiset
using namespace std;

// a diferencia del set, en el multiset si se pueden agregar elementos dulicados
int main() {

	multiset<int> valores;
	
	//insertamos valores al multiconjunto
	valores.insert(10);
	valores.insert(2);
	valores.insert(5);
	valores.insert(20);
	valores.insert(3);
	
	
	//mostrar en pantalla 
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<"\n\n";
	//insertar valores duplicados 
	
	valores.insert(10);
	valores.insert(3);
	valores.insert(3);
	

	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<"\n\n";
	
	//buscar elemento en el multiset 
	
	multiset<int>::iterator i = valores.find(15);
	
	if (i!=valores.end()){
		cout<<"\nEl elemento "<<*i<<" si ha sido encontrado"<<endl;
	}
	else{
		cout<<"\nEl elemento no ha sido encontrado"<<endl;
	}
	
	//contar cuantas veces aparece un elemeto ""solo se puede usar en el multiset""
	
	cout<<"\nEl numero 3 aparece "<<valores.count(10)<<" veces en el multiset"<<endl;
	
	//eliminar un elemento ""sie le elemento se elimina se eliminan todas sus copias
	
	valores.erase(3);
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
	cout<<"\n\n";
	
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
