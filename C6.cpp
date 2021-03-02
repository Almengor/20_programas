#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    
if((x<1)||(x>999)) cout<<"Ingrese un numero del 1 al 999\n";
else
 
    {
        if(x>=900)   {cout<<"novecientos " ;x=x-900;}
       else if(x>=800)   {cout<<"ochocientos " ;x=x-800;}
       else if(x>=700)   {cout<<"setecientos " ;x=x-700;}
       else if(x>=600)   {cout<<"seiscientos " ;x=x-600;}
       else if(x>=500)   {cout<<"quinientos "  ;x=x-500;}
       else if(x>=400)   {cout<<"cuatrocientos "   ;x=x-400;}
       else if(x>=300)   {cout<<"trecientos " ;x=x-300;}
       else if(x>=200)   {cout<<"doscientos "  ;x=x-200;}
       else if(x>100)    {cout<<"ciento "  ;x=x-100;}
       else if(x==100)  {cout<<"cien "     ;x=x-100;}
        if(x>90) {cout<<"noventa y "   ;x=x-90; }
            if(x==90)   {cout<<"noventa "  ;x=x-90; }  
            if(x>80) {cout<<"ochenta y "   ;x=x-80; }
            if(x==80)   {cout<<"ochenta "  ;x=x-80; }
            if(x>70) {cout<<"setenta y "   ;x=x-70; }
            if(x==70)   {cout<<"setenta "  ;x=x-70; }
            if(x>60) {cout<<"sesenta y "   ;x=x-60; }
            if(x==60)   {cout<<"sesenta "  ;x=x-60; }
            if(x>50) {cout<<"cincuenta y " ;x=x-50; }
            if(x==50)   {cout<<"cincuenta "    ;x=x-50; }
            if(x>40) {cout<<"cuarenta y "  ;x=x-40; }
            if(x==40)   {cout<<"cuarenta " ;x=x-40; }
            if(x>30) {cout<<"treinta y "   ;x=x-30; }
            if(x==30)   {cout<<"treinta"  ;x=x-30; }
            if(x>20) {cout<<"veinti"       ;x=x-20; }
            if(x==20)   {cout<<"veinte"       ;x=x-20; }
        if(x>=16)    {cout<<"dieci"        ;x=x-10; }
       else if(x==15)   {cout<<"quince"       ;x=x-15; }
       else if(x==14)   {cout<<"catorce"  ;x=x-14; }
       else if(x==13)   {cout<<"trece"        ;x=x-13; } 
       else if(x==12)   {cout<<"doce"     ;x=x-12; }
       else if(x==11)   {cout<<"once"     ;x=x-11; }
       else if(x==10)   {cout<<"diez"     ;x=x-10; }      
        if(x==9)    {cout<<"nueve"        ;x=x-9;  }
        if(x==8)    {cout<<"ocho"     ;x=x-8;  }
        if(x==7)    {cout<<"siete"        ;x=x-7;  }
            if(x==6)    {cout<<"seis"     ;x=x-6;  }
       else if(x==5)    {cout<<"cinco"        ;x=x-5;  }
       else if(x==4)    {cout<<"cuatro"       ;x=x-4;  }
       else if(x==3)    {cout<<"tres"     ;x=x-3;  }
       else if(x==2)    {cout<<"dos"      ;x=x-2;  }
       else if(x==1)    {cout<<"uno"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();return 0;
}
