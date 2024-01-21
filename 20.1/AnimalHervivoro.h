
#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalHervivoro : public Animal{
	
	public:
		void alimentarse(){
			cout<<"Un animal hervivoro se alimenta de hierbas"<<endl;
		}
};



