#include <iostream>
#include "serVivo.h"
using namespace std;

class Planta : public serVivo{
	
	public:
		void alimentarse(){
			cout<<"La planta se alimenta mediante la fotosistesis"<<endl;
		}
};
