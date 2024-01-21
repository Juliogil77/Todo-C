#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>
using namespace std;
//funcion para pasar las letras a mayusculas
void mayusculas (char &letra){
	if(letra>='a' && letra<='z'){
		letra = letra - ('a'- 'A');
	}
}
//funcion unaria para determinar si una letra es una vocal
char vocales(char letra){
	return (letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U') ? letra : '-';
}

int main(int argc, char** argv) {
	vector <char> letras;
	
	//generamos letras para el vector 
	for(int i=0;i<10;i++){
		letras.push_back('a' + i);
	}
	
	cout<<"Vector original"<<endl;
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//desordenar el vector letras
	random_shuffle(letras.begin(),letras.end());
	
	cout<<"\nvector desordenado: "<<endl;
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//pasando todo el vector as mayuscualas
	for_each(letras.begin(),letras.end(),mayusculas);
	
	cout<<"\nvector en mayusculas: "<<endl;
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"));
	cout<<endl;
	
	//i,primir solo las vocales 
	cout<<"\nimprimiendo solo las vocales: "<<endl;
	transform(letras.begin(),letras.end(),ostream_iterator<char> (cout,"|"),vocales);
	
	cout<<"\n\n";
	system ("pause");
	return 0;
}
