#include <iostream>
#include <fstream>	//para archivos
#include <iterator>	//para steam iterators
#include <vector>
#include "cstdlib"
using namespace std;
int main(int argc, char** argv) {
	
	ifstream archivo;
	archivo.open("C:\\Nueva capeta\\documento.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se puede abrir el archivo";
		exit(1);
	}
	
	istream_iterator<char> p(archivo);  //iterador para char
	vector<char> frase;
	
	while(!archivo.eof()){		//mientras no sea el final de archivo 
		frase.push_back(*p);	//almacenamos el caracter por el que vamos
		p++;
	}
	
	//mostramos el vector frase 
	
	for(int i=0;i<frase.size();i++){
		cout<<frase[i];
	}
	cout<<endl;
	
	archivo.close();
	
	return 0;
}
