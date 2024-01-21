#include <iostream>
#include <cstdlib>
#include <map>
#include <iterator>
using namespace std;

typedef pair<int,string> par;

int main(){
	
	map<int,string> valores ;		//creamos un mapa <clave,valor>
	
	//insertar valores en el map (se ordenan segun la clave)
	valores.insert(par(5,"Alejandro"));
	valores.insert(par(2,"Fatima"));
	valores.insert(par(1,"Juan"));
	valores.insert(par(3,"Estefany"));
	
	//Mostrar el map en pantalla
	
	map<int,string>::iterator i;
	for(i=valores.begin();i!=valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	
	//modificar un valor de una clave existente 
	
	valores[1] = "Luis";
	valores[8] = "Maria";
	cout<<"\n\n";
	for(i=valores.begin();i!=valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	
	//buscar un elemento en el map
	
	i = valores.find(2);
	
	if(i != valores.end()){
		cout<<"\nEl elemento "<<i->second<<" si ha sido encontrado"<<endl;
	}
	else{
		cout<<"\nEl valor no ha sido encontrado"<<endl;
	}
	
	//eliminar un elemento de un map
	
	valores.erase(1);
	
	cout<<"\n\n";
	for(i=valores.begin();i!=valores.end();i++){
		cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
	}
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
