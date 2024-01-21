//Implementacion de la clase DiaAno

class DiaAno{
	
		private:	//atributos
			int dia,mes;
			
		public:		//metodos
		//constructor 1
		DiaAno(int _dia,int _mes){
			dia = _dia;
			mes = _mes;
		}
		
		bool igual(DiaAno& d);
		void visualizar();
};
