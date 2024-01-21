#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
#include "Deportista.h"
using namespace std;

class BecadoDeporte : public Alumno, public Deportista{
	
		private:
			
			float beca;
			
		public:
			
			BecadoDeporte(string carrera, string entrenador, float beca) : Alumno(carrera) , Deportista(entrenador){
				this->beca = beca;
			} 
			
			~BecadoDeporte(){
				
			}
			
			void mostrarDatos(){
				Alumno::mostrarDatos();
				Deportista::mostrarDatos();
				cout<<"La beca correspondiente es de "<<beca<<"dolares"<<endl;
			}
			
			void setCambiarBeca(float n){
				float incremento = (beca*n)/100;
				this->beca += incremento;
				
				
			}
			
			float getBeca(){
				return beca;
			}
			
			
};
