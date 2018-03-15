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
   int codigo[5],salario[5],trans[5],seleccion,salMin,subcidio,user;
   float pension[5],eps[5],pago[5];

   cout <<"ingrese el valor del salario minimo\n";
   cin >>salMin;
   cout <<"ingrse el valor del subcidio\n";
   cin >> subcidio;
   for(int i = 0;i<5;i++){
   	cout <<"ingrese codigo del empleado\n";
   	cin >>codigo[i];
      cout <<"ingrese salario del empleado\n";
      cin >>salario[i];
      if(salario[i] < (salMin*2)){
      	cout <<"ingrese subcidio de transporte del empleado\n";
         cin >>trans[i];
      }
      else{
         trans[i] = 0;
      }
      cout <<"ingrese pension del empleado\n";
      cin >>pension[i];
      cout <<"ingrese pago eps del empleado\n";
      cin >>eps[i];
   }

   cout<<"Menu de opciones\n";
   cout<<"1) consultar por empleado\n";
   cout<<"2) modificar pagos de trabajador \n";
   cout<<"3) Listar \n";
   cin>>seleccion;

   switch ( seleccion )
   {
   	case 1:
      	cout<<"dijite el numero del usuario \n";
         cin>>user;
         cout<<"el codigo de el empleado es \n";
         cout<<codigo[user];
         cout<<"el salario de el empleado es\n";
         cout<<salario[user];
         cout<<"el subcidio de transporte es  \n";
         cout<<trans[user];
         cout<<"la pencion de el trabajador \n";
         cout<<pension[user];
         cout<<"el pago de el empleado es \n";
         cout<<pago[user];
   	break;
      case 2:
      	cout<<"dijite el numero del usuario \n";
         cin>>user;
         cout<<"cambiar el codigo de el empleado es \n";
         cin>>codigo[user];
         cout<<"cambiar el salario de el empleado es\n";
         cin>>salario[user];
         cout<<"cambiar el subcidio de transporte es  \n";
         cin>>trans[user];
         cout<<"cambiar la pencion de el trabajador \n";
         cin>>pension[user];
         cout<<"cambiar el pago de el empleado es \n";
         cin>>pago[user];
      break;
      case 3:
      	for(int e = 0;e<5;e++){
         	cout<<"el empleado \n";
            cout<<"el codigo de el empleado es \n";
            cout<<codigo[e];
            cout<<"el salario de el empleado es\n";
            cout<<salario[e];
            cout<<"el subcidio de transporte es  \n";
            cout<<trans[e];
            cout<<"la pencion de el trabajador \n";
            cout<<pension[e];
            cout<<"el pago de el empleado es \n";
            cout<<pago[e];
         };
      break;
   }

	getch();
}
