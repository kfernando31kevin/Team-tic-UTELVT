//hola este codigo esta hecho por Cijel Espinoza
#include <iostream>
using namespace std;


int main() {
	floar x,l,c=0,si=0,se=0;
	
	cour<<"ingrese el valor limite:";
	cin>>l;
	do{
		cout<<"ingrese el valor mensual:";
		cin>>x;
		s=s+1;
		a=a+x;
	if(x>0){
		si=si+x;
	else{
		se=se+x;
	  } 
	 }
	}
	while(s<l);
	cout<<"egresos:"<<se<<endl;
	cout<<"ingresos:"<<si<<endl;
	cout<<"total:"<<a<<endl;
	
	return 0;
}
