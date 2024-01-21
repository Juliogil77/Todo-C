/*Transmicion de direcciones

ejemplo: intercambiar el valor de 2 variables
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void intercambio(float *,float *);

int main(){
	
	float num1 = 20.8, num2 = 6.78;
	
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	intercambio(&num1,&num2);
	
	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
void intercambio(float *dirNm1,float *dirNm2){
	float aux;
	
	
	aux = *dirNm1;
	*dirNm1 = *dirNm2;
	*dirNm2 = aux;
}
