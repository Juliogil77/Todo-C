#include <iostream>
#include <cstdlib>
#include <map>
#include <iterator>
using namespace std;

typedef pair<int,string> par;

int main(){
	
	multimap<int,string> valores;
	
	//insertar valores
	
	valores.insert (par(3,"Estefany"));
	valores.insert (par(1,"Luis"));
	valores.insert (par(5,"Alejandro"));
	valores.insert (par(2,"Maria"));
	
	//mostrar en pantalla el multimap
	
	multimap<int,string>::iterator i;
	
	for(i=valores.begin();i!=valores.end();i++){
		
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	} 
	cout<<"\n\n";
	
	//insertar valores con claves repetidas
	
	valores.insert (par(1,"Carla"));
	valores.insert (par(5,"Paola"));
	valores.insert (par(5,"Fernando"));
	
	for(i=valores.begin();i!=valores.end();i++){
		
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	} 
	cout<<"\n\n";
	
	//contar cuantas veces aparece una clave
	
	int clave = 5;
	
	cout<<"Conteo de la clave "<<clave<<": "<<valores.count(clave)<<endl;
	
	for(i=valores.lower_bound(clave);i!=valores.upper_bound(clave);i++){
		
		cout<<i->second<<" | ";
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
