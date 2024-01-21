//Declaracion de una clase

class Punto{
	//atributos
	private:  
		int x,y;
	//metodos 
	public:	
		//constructor 1
		Punto(int _x,int _y){
			x = _x;
			y = _y;
		}
		
		//constructor 2
		Punto(){
			x = 0;
			y = 0;
		}
		
		// metodos setters
		void setX(int valorX); 	//establecemos el valor de x desde otra clase 
		void setY(int valorY);	//establecemos el valor de y desde otra clase 
		
		// metodos Geters
		
		int getX();			//	obtener el valor de X			
		int getY();			//  obtener el valor de Y
};
