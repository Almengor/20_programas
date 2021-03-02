#include <iostream>
#include<stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

class stMenu
{
public:
char Menu[25];
};
using namespace std;
COORD coord= {0,0};
float saldo=1000;
float deposita=0;
float retira=0;
int opc;
int nip=1234;
int contra=1234;

void gotoxy (int x, int y)
{
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void DestruirPopUp(stMenu PopUp[],int Nopc);

int PopUpMenu(stMenu PopUp[],int Nopc,int xi,int yi,
int iTxtColorR,int iTxtColorBR,
int iTxtColorN,int iTxtColorBN);
void ventana ()
{
int z1=27,z2=27,y1=3,y2=3;
while (y2!=14)
{
gotoxy(60,y2);
cout <<"#"<< endl;
y2++;
}
while (z1!=60)
{
gotoxy(z1,14);
cout <<"#" << endl;
z1++;
}
while (z2!=60)
{
gotoxy(z2,2);
cout <<"#"<< endl;
z2++;
}
while (y1!=14)
{
gotoxy(26,y1);
cout <<"#" << endl;
y1++;
}
}
int main()
{
cout << "Bienvenido al Banco Internacional\n\n\n " << endl << endl;
cout << "Por favor ingrese su numero de CIF y pin\n" << endl << endl;
cout << "Recuerde que su numero de CIF y pin son confidenciales.\n\n" << endl << endl;
cout<< "CIF: ";
cin >> nip;
cout<< "\nPin:";
cin >> contra;
if(nip == 1234 && contra == 1234){
system("cls");

char ans,cr;
int opcion=0;

stMenu PopUp[4]; 
cout << "\n\n\n\n\n -Bienvenido al Banco Internacional-" << endl;
strcpy(PopUp[0].Menu,"1.- Consulta de saldo"); 
strcpy(PopUp[1].Menu,"2.- Deposito "); 
strcpy(PopUp[2].Menu,"3.- Retiro ");
strcpy(PopUp[3].Menu,"4.- Salir del cajero"); 
cout << "\n\n\n\n\n\n Que transaccion desea hacer []" <<endl;
do
{

opcion=PopUpMenu(PopUp,4,10,10,14,1,7,0);
switch(opcion)
{
case 1:
gotoxy(1,23);
system("cls");
cout << "CONSULTA DE SALDO " << endl << endl;
cout << "\n\n Su saldo actual es de: " << saldo;
cout << "\n\n" << endl;
cout << "\n\n¿Desea realizar otra transaccion? \n1.-Si\n2.-No" << endl << endl;
cin >> opc;
switch(opc){
case 1:
system("pause");
break;

case 2:
system("cls");
cout << "\n\nGracias por preferir a Banco Internacional" << endl << endl;
return 0;
break;
default:
cout << "Esta no es una opcion valida " << endl << endl;
break;
system("cls");
break;
}
system("cls");
break;
case 2:
gotoxy(1,23);
system("cls");
cout << "DEPOSITO\n\n " << endl << endl;
cout << "Ingrese cantidad a depositar\n " << endl << endl;
cin >> deposita;
cout << "\nSe ha realizado el deposito de manera exitosa " << deposita;
saldo = saldo+deposita;
cout << "\n\n" << endl;

cout << "\n\nDesea realizar otra transaccion? \n1.-Si\n2.-No" << endl << endl;
cin >> opc;
switch(opc){
case 1:
system("pause");
break;

case 2:
system("cls");
cout << "\n\nGracias por preferir a Banco Internacional" << endl << endl;
return 0;
break;
default:
cout << "Esta no es una opcion valida " << endl << endl;
break;
system("cls");
break;
}
system("cls");
break;
case 3:
gotoxy(1,23);
system("cls");
cout << "RETIRO" << endl << endl;
cout << "Ingrese cantidad a retirar\n " << endl << endl;
cin >> retira;
if(retira>saldo){
cout << "\nSu saldo actual es de :" << saldo;
cout << "\n\nUsted no puede retirar mas de esa cantidad." << endl;
}else{
cout << "\nSe ha realizado retiro de " << retira;
saldo = saldo-retira;
}
cout << "\n\n" << endl;

cout << "\n\nDesea realizar otra transaccion? \n1.-Si\n2.-No" << endl << endl;
cin >> opc;
switch(opc){
case 1:
system("pause");
break;

case 2:
system("cls");
cout << "\n\nGracias por preferir a Banco Internacional" << endl << endl;
return 0;
break;
default:
cout << "No es una opcion valida " << endl << endl;
break;
system("cls");
break;
}
system("cls");
break;
case 4:
gotoxy(1,23);
system("cls");
cout<<"\n\nBanco EL Sucio Dan le agradece su preferencia." << endl;
system("pause");
return 0;
break;
}
}while(opcion!=0);

DestruirPopUp(PopUp,4); 
return 0;
}else{
cout << "CIF y/o pin incorrectos\n\n" << endl;
system("pause");
}
}
void color (int X )
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), X);
}
int PopUpMenu(stMenu PopUp[],int Nopc,int xi,int yi,
int iTxtColorR,int iTxtColorBR,
int iTxtColorN,int iTxtColorBN)
{
int i,iTecla,iPt=0,HuboSeleccion=0,iRetorno=0;
char Tecla;
color(1);

for(i=0;i<=Nopc-1;i++)
{
gotoxy(xi,yi+i);
cout<<(PopUp[i].Menu) <<endl;
}
color(3);

gotoxy(xi,yi);
cout << (PopUp[0].Menu) << endl;
do
{
Tecla=getch(); 
if(Tecla=='H' || Tecla=='H')
{
gotoxy(xi,yi+iPt);
color(4);

cout << (PopUp[iPt].Menu) <<endl;
}
iTecla=Tecla;
switch(Tecla)
{
case 'H': 
if(iPt==0) iPt=Nopc-1;
else -iPt;
break;
case 'P':
if(iPt==Nopc-1) iPt=0;
else ++iPt;
break;
case 13:
HuboSeleccion=1;
iTecla=27;
break;
} 
if(Tecla=='H' || Tecla=='P')
{ 
color(5);

gotoxy(xi,yi+iPt);
cout << (PopUp[iPt].Menu) << endl;
}
}while(iTecla!=27);
if(HuboSeleccion) iRetorno=++iPt;
color(6);

return iRetorno;
}

void DestruirPopUp(stMenu PopUp[],int Nopc)
{
for(int i=0;i<=Nopc-1;i++)
delete PopUp[i].Menu;
}


