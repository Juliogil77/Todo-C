#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	
	int iNum,*iDir_num;
	
	iNum = 20;
	iDir_num = &iNum;
	
	cout<<"Numero: "<<*iDir_num;
	cout<<"\nDireccion de memoria: "<<iDir_num;
	
	cout<<"\n\n\n";
	system("pause");
	return 0;
}
