#include<iostream> 
#include<cmath> 
#ifdef WIN32
#define clear() system("cls");
#else
#define clear() system("clear");
#endif
#ifdef WIN32
#define PAUSE() system("PAUSE");
#else
#define PAUSE() system("PAUSE");
#endif
 
using namespace std;
int main() { 

  int opcion;
  float cat1,cat2,hip;
  
  do {
    clear();
    cout<<"1.Calcular Hipotenusa De Triangulo"<<endl<<"2.Salir"<<endl; /*Escoger opcion*/
    cin>>opcion;
 
    switch(opcion) {
      case 1:  
        do {
        
          cout<<"Escribe la medida de los catetos"<<endl;
          cout<<"Cateto 1: "<<endl;
          cin>>cat1;
          cout<<"Cateto 2: "<<endl;
          cin>>cat2;
          
          if (cat1 > 0 && cat2 > 0) {
 
            hip = sqrt(pow(cat1,2.0)+ pow(cat2,2.0));
            cout<<"La hipotenusa es: "<<sqrt(pow(cat1,2.0)+ pow(cat2,2.0))<<endl;
            system("PAUSE");
            clear();
          }
            
          else{
            cout<<"Error,los catetos deben ser positivos"<<endl;
            system("PAUSE");
            clear();
          }
        
        } while(cat1 <=0 || cat2 <= 0);
        break;

      case 2:
        break;
 
      default: 
        cout<<"Opcion incorrecta"<<endl;
        system("PAUSE");                  
    }
  } while(opcion != 2);
}
