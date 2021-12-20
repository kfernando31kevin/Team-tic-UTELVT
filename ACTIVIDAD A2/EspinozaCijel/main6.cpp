//Hola este codigo esta hecho por Cijel Espinoza

#include <iostream>

using namespace std;

int main() {
	floar x,c=0,l=30,ca=0,cr=0;
	do{
		cout<<"ingrese el promedio:";
		cin<<x;
		c=c+1;
	} 
	if(x>7){
		ca=ca+x;
	     else{
	     	if(x<5){
	     		cr=cr+x;
			 }
		 }	
	}
	}
	while (c<l);
	cout<<"apureban:"<<ca<<endl;
	cout<<"repreban:"<<cr<<endl;
	
	return 0;
}
