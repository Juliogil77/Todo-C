#include <iostream>
using namespace std;
class Tablero{
	
	private: //atributos 
		int x , y;
	public:
		Tablero(int x,int y){//constructor de la clase 
			this->x = x;
			this->y = y;
		}
		
		void arriba(int n);
		void abajo(int n);
		void izquierda(int n);
		void derecha(int n);
		int getx();
		int gety();
	
};
