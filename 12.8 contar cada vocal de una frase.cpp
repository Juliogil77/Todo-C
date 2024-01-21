#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void pedirdatos ();
void contadordevocales(char *,int &,int &,int &,int &,int &);

char *frase;

int main(){
	
	int a=0,e=0,i=0,o=0,u=0;
	
	pedirdatos();
	contadordevocales(frase,a,e,i,o,u);
	
	cout<<"La cantidad de veces que aparece cada vocal en la frase es de: \n\n";
	cout<<"a:"<<a<<"\ne:"<<e<<"\ni:"<<i<<"\no:"<<o<<"\nu:"<<u;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void pedirdatos (){
	
	frase = new char[40];
	
	cout<<"Dame la frase: ";cin.getline(frase,40,'\n');
	
	strlwr(frase);
}
void contadordevocales(char *frase,int &a,int &e,int &i,int &o,int &u){
	
	       
	while(*frase){//mientras que palabra no sea nulo '\0'
		switch(*frase){
			
			case 'a':
				a++;break;
			case 'e':
				e++;break;
			case 'i':
				i++;break;
			case 'o':
				o++;break;
			case 'u':
				u++;break;
		}	
		frase++;
	}	
}
