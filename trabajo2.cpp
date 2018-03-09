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
         cout<<codigo[user];
         cout<<salario[user];
         cout<<trans[user];
         cout<<pension[user];
         cout<<pago[user];
   	break;
      case 2:
      	cout<<"dijite el numero del usuario \n";
         cin>>user;
         cin>>codigo[user];
         cin>>salario[user];
         cin>>trans[user];
         cin>>pension[user];
         cin>>pago[user];
      break;
      case 3:
      	for(int e = 0;e<5;e++){
         	cout<<"user \n";
            cout<<codigo[e];
            cout<<salario[e];
            cout<<trans[e];
            cout<<pension[e];
            cout<<pago[e];
         };
      break;
   }

	getch();
}
