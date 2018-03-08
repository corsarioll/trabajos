#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>

using namespace std;

int consultar(int number[] ){
	cout<<"su saldo es $";
   cout<<number[1];
}

int main(){
   int codigo[5],salario[5],trans[5],seleccion,salmin;
   float pension[5],eps[5],pago[5];

   for(int i = 0;i<5;i++){
   	cout <<"ingrese codigo del empleado\n";
   	cin >>codigo[i];
      cout <<"ingrese salario del empleado\n";
      cin >>salario[i];
      if(salario[i] < 1400000){
      	cout <<"ingrese subcidio de transporte del empleado\n";
      }
      cin >>trans[i];
      cout <<"ingrese pension del empleado\n";
      cin >>pension[i];
      cout <<"ingrese pago eps del empleado\n";
      cin >>eps[i];
   }

   cout<<"Menu de opciones\n";
   cout<<"1) Pago total por empleado\n";
   cout<<"2) Listar pago de subcidio de transporte \n";
   cout<<"3) Listar pago de pensiones \n";
	cout<<"4) Listar pago de eps \n";
   cin>>seleccion;

   switch ( seleccion )
   {
   	case 1:
        for(int i = 0;i<5;i++){
        	cout<<"entro";
        }
   	break;
   }

	getch();
}
