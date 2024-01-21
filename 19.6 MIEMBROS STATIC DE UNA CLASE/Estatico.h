#include <iostream>
using namespace std;
//atributos de tipo estatico
class Estatico{
	
	private:
		static int contador;		//declaracion de un atributo estatico
		
	public:
		Estatico(){
			contador++;
		}
		int getContador(){
			return contador;
		}
		
		static int sumar (int n1, int n2){
			int suma = n1+n2;
			return suma;
		}
};
