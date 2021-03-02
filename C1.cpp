#include<iostream>
using namespace std;

int main(){
	void () num1,num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout<<"Digite un mumero: "; cin>>num1;
	cout<<"Digite otro mumero: "; cin>>num2;
	
	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;
	
	cout<<"\nLa suma de los numeros es: "<<suma<<endl;
	cout<<"La resta de los numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de los numeros es: "<<multiplicacion<<endl;
	cout<<"La division de los numeros es: "<<division<<endl;
	
	return 0;
}
