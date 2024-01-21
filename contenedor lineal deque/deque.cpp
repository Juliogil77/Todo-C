#include <iostream>
#include <stdlib.h>
#include <deque>
using namespace std;

int main(int argc, char** argv) {
	
	deque <char> letras;
	
	letras.push_front('C'); //agregamos un elemento por el principio
	letras.push_front('B');
	letras.push_front('A');
	
	
	letras.push_back('D');	//agrgamos un elemento al final 
	letras.push_back('E');
	letras.push_back('F');
	
	for(int i=0;i<letras.size();i++){	//mostrar los elemetos 
		cout<<letras[i]<<"|";
		
	}
	
	letras.pop_front();	//eliminar elementos del principio
	letras.pop_back();	//eliminar elementos del final
	cout<<endl;
	
	for(int i=0;i<letras.size();i++){	//mostrar los elemetos 
		cout<<letras[i]<<"|";
		
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
