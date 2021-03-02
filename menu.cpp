#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

int main (){
	int menu;
	int codigo = 0;
    bool fin = false;
	INICIO:
	cout<<endl;
    cout<<"         Programacion I 20 Codigos"<<endl;
    cout<<endl;
    
    MENU:
    cout<<endl;
    cout<<"   Seleccione una opcion"<<endl;
    cout<<endl;
    cout<<"   Codigo                       						  Escriba"<<endl;
    cout<<endl;
    cout<<"   Operaciones matematicas                                1"<<endl;
    cout<<"   Numero par o impar                                     2"<<endl;
    cout<<"   Conversion de medidas                                  3"<<endl;
    cout<<"   Palabra y/o numero palindromo							 4"<<endl;
    cout<<"   Conversion de numeros arabicos a romanos               5"<<endl;
    cout<<"   Conversion de numeros a letras     		    		 6"<<endl;
    cout<<"   Conversion de numeros con decimal a letras          	 7"<<endl;
    cout<<"   Una tabla de multiplicar             		    		 8"<<endl;
    cout<<"   Tablas de multiplicar del 1 al 10             		 9"<<endl;
    cout<<"   Muntiplicacion manual            		    			 10"<<endl;
    cout<<"   Conversion de numeros decimales a binario   			 11"<<endl;
    cout<<"   Conversion de numeros decimales a hexadecimales   	 12"<<endl;
    cout<<"   Figuras geometricas						   			 13"<<endl;
    cout<<"   Mover un punto en toda la pantalla		  			 14"<<endl;
    cout<<"   Simulacion de cajero automatico			   			 15"<<endl;
    cout<<"   Calculo de hipotenusa						   			 16"<<endl;
    cout<<"   Calculo de iva							   			 17"<<endl;
    cout<<"   Calculo de Perimetro						   			 18"<<endl;
    cout<<"   Calculo de Area							   			 19"<<endl;
    cout<<"   Facturacion de supermercado						     20"<<endl;
    cout<<endl;
    cout<<"   Ingrese el codigo a visualizar: ";cin>>codigo;cout<<endl;

    switch (codigo) {
        case 1:
        	codigo = 1;
        	cout<<"   Operaciones matematicas "<<endl;  
            system("cls");
            break;  
		case 2:
        	codigo = 2;
        	cout<<"   Numero par o impar "<<endl;  
            system("cls");
            break;
		case 3:
        	codigo = 3;
        	cout<<"   Conversion de medidas "<<endl;  
            system("cls");
            break;
		case 4:
        	codigo = 4;
        	cout<<"   Palabra y/o numero palindromo "<<endl;  
            system("cls");
            break;
		case 5:
        	codigo = 5;
        	cout<<"   Conversion de numeros arabicos a romanos "<<endl;  
            system("cls");
            break;
		case 6:
        	codigo = 6;
        	cout<<"   Conversion de numeros a letras "<<endl;  
            system("cls");
            break;
		case 7:
        	codigo = 7;
        	cout<<"   Conversion de numeros con decimal a letras  "<<endl;  
            system("cls");
            break;
		case 8:
        	codigo = 8;
        	cout<<"   Una tabla de multiplicar "<<endl;  
            system("cls");
            break; 
        case 9:
        	codigo = 9;
        	cout<<"   Tablas de multiplicar del 1 al 10  "<<endl;  
            system("cls");
            break;
		case 10:
        	codigo = 10;
        	cout<<"   Muntiplicacion manual "<<endl;  
            system("cls");
            break;   
		case 11:
        	codigo = 11;
        	cout<<"   Conversion de numeros decimales a binario "<<endl;  
            system("cls");
            break;  
		case 12:
        	codigo = 12;
        	cout<<"   Conversion de numeros decimales a hexadecimales "<<endl;  
            system("cls");
            break;
		case 13:
        	codigo = 13;
        	cout<<"   Figuras geometricas "<<endl;  
            system("cls");
            break;
		case 14:
        	codigo = 14;
        	cout<<"   Mover un punto en toda la pantalla "<<endl;  
            system("cls");
            break;
		case 15:
        	codigo = 15;
        	cout<<"   Simulacion de cajero automatico	 "<<endl;  
            system("cls");
            break;
		case 16:
        	codigo = 16;
        	cout<<"   Calculo de hipotenusa	 "<<endl;  
            system("cls");
            break;
		case 17:
        	codigo = 17;
        	cout<<"   Calculo de iva "<<endl;  
            system("cls");
            break;
		case 18:
        	codigo = 18;
        	cout<<"   Calculo de Perimetro "<<endl;  
            system("cls");
            break; 
        case 19:
        	codigo = 19;
        	cout<<"   Calculo de Area "<<endl;  
            system("cls");
            break;
		case 20:
        	codigo = 20;
        	cout<<"   Facturacion de supermercado "<<endl;  
            system("cls");
            break; 
 }
    int m[codigo][codigo];
    string mT[codigo][codigo];

  return 0;
}
