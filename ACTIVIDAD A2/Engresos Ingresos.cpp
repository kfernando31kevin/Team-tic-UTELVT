//Enoc Aljandro Franco Mendoza 



#include<iostream>
using namespace std;
int main()
{

	float x,l,s=0,a=0,si=0,se=0;
	
	cout<<"Ingresar numero limite: ";
	cin>>l;

	do {
		cout<<"ingrese el valor mensual: ";
		cin>>x;
		
		s=s+1;
		
		a=a+x;
		
		if (x>0){
			si=si+x;
		}else{
			se=se+x;
		}
	}
	while (s<l);
	cout<<"egresos :"<<se<<endl;
	cout<<"ingresos :"<<si<<endl;
	cout<<"total:"<<a<<endl;

	return (0);
}
