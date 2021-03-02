#include<iostream>
using namespace std;

int main (){
	
	int opcion;
	double kilometros, millas, metros, pulgadas, libras, kilos;
	cout<<"Elija una opcion: "<<endl;
	cout<<"\n1. Kilometros a millas "<<endl;
	cout<<"2. Millas a kilometros "<<endl;
	cout<<"3. Metros a pulgadas "<<endl;
	cout<<"4. Pulgadas a metros "<<endl;
	cout<<"5. Libras a kilos  "<<endl;
	cout<<"6. kilos a libras "<<endl,cin>> opcion;
	
	switch (opcion){
		case 1:
			cout<<"\nKilometros a millas"<<endl;
			cout<<"Ingrese la cantidad de Kilometros a convertir: "<<endl;
			cin>>kilometros;
			millas = kilometros * 0.621371;
			cout<< kilometros<<" kilometros equivalen a "<<millas<<" millas."<<endl;
			break;
			
		case 2:
			cout<<"\nMillas a kilometros"<<endl;
			cout<<"Ingrese la cantidad de Millas a convertir: "<<endl;
			cin>>millas;
			kilometros = millas * 1.61;
			cout<<millas<<" millas equivalen a "<<kilometros<<" kilometros."<<endl;
			break;
	
		case 3:
			cout<<"Metros a pulgadas"<<endl;
			cout<<"Ingrese la cantidad de Metros a convertir: "<<endl;
			cin>>metros;
			pulgadas = metros * 39.37;
			cout<<metros<<" metros equivalen a "<<pulgadas<<" pulgadas."<<endl;
			break;
	
		case 4:
			cout<<"Pulgadas a metros"<<endl;
			cout<<"Ingrese la cantidad de pulgadas a convertir: "<<endl;
			cin>>pulgadas;
			metros = pulgadas * 0.0254;
			cout<<pulgadas<<" pulgadas equivalen a "<<metros<<" metros."<<endl;
			break;
		
		case 5:
			cout<<"Libras a kilos"<<endl;
			cout<<"Ingrese la cantidad de Libras a convertir: "<<endl;
			cin>>libras;
			kilos = libras * 0.4536;
			cout<<libras<<" libras equivalen a "<<kilos<<" kilos."<<endl;
			break;
			
		case 6:
			cout<<"Kilos a libras"<<endl;
			cout<<"Ingrese la cantidad de kilos a convertir: "<<endl;
			cin>>kilos;
			libras = kilos * 2.205;
			cout<<kilos<<" kilos equivalen a "<<libras<<" libras."<<endl;
			break;

default:
	cout<<"La opcion ingresada no es correcta."<<endl;
}
}
	
