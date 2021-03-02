#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 float r,x,iva;
  
 printf("Introduzca el precio de un producto:");
 scanf("%f", &x);
  
 iva=(16*x/100);
 r=x-iva;
  
 printf("\nEl precio con IVA es de: %f\n\n",x+iva);
 printf("\nEl precio sin IVA es de: %f\n\n",r);
 
 
system("pause");
return 0;
 
}

