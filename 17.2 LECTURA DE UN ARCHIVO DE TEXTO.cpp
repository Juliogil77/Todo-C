#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void lectura();

int main(){

	lectura();

	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void lectura(){
	
	ifstream archivo;
	string texto;
	
	
	archivo.open("programacion.txt",ios::in);	//abrimos el archivo en modo lectura
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){	//mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}

