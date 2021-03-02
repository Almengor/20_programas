#include <iostream>

using namespace std;
int main()
{
	int digito[20];
	int decimal, residuo, resultado, i=0;
	
	cout<<"Escriba el numero decimal a comvertir: "<<endl;
	cin>>decimal;
	
	do
	{
		residuo = decimal % 16;
		resultado = decimal / 16;
		digito[i] = residuo;
		decimal = resultado;
		i++;
	}while (resultado > 15);
	
	digito[i] = resultado;
	cout<<"El equivalente en hexadecimales es: ";
	
	for (int j = i; j >=0; j--)
	{
		if (digito [j] == 10)
	{
		cout<<"A";
	}
	else if (digito [j] == 11)
	{
		cout<<"B";
	}
		else if (digito [j] == 12)
	{
		cout<<"C";
	}
		else if (digito [j] == 13)
	{
		cout<<"D";
	}
		else if (digito [j] == 14)
	{
		cout<<"E";
	}
		else if (digito [j] == 15)
	{
		cout<<"F";
	}
	else
	{
		cout<<digito[j];
	}
	cout;
}
}
