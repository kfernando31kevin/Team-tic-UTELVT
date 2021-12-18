//Hola este codigo esta hecho por Cijel Espinoza

#include <iostream>
using namespace std;

int main() {
	
	int x,y;
	cout<<"ingrese un numero: ";
	cin>>x;
	cout<<"ingrese un numero: ";
	cin>>y;
	
	if(x==y){
		cout<<x<<"es igual a: ";
		cout<<y;
		
	}
	else{
		if (x<y){
			cout<<x<<"es menor que: ";
			cout<<y;
		}
		else {
			cout <<y<<"es menor que: ";
			cout<<x;
			
		}
	}
	
	return 0;
}
