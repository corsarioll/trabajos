#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>
#include <string>

using namespace std;

int consultar(int number ){
	cout<<"su saldo es $";
   cout<<number;
}
int ingClave(){
	cout<<"Ingrse su clave\n";
}

int main(){
	int clave = 1234;
   int claveIngr, seleccion;
   int saldo = 1000000;
   int sPedido;
   int intentos = 1;
   bool check = false;
   char colour[4][10] = {"Blue", "Red", "Orange","Yellow"};
   char users[4][10] = { "user1", "user2", "user3", "user4"};
   char pass[4][10] = { "user1", "user2", "user3", "user4"};
   int foo [5] = { 10000, 200000, 30000, 400000 };
   std::string username ("green apple");
  	std::string password ("red apple");

   cout<<"Bienvenido al banco robamas\n";
   cout<<"Ingrse su clave\n";;

   cin>>claveIngr;
   for(int i = 0l; i <= 4; i = i + 1){
      cout<<username;
      cin>>password;
      cout<<"\n";
      if (username.compare(password) != 0){
    		cout << username << " is not " << password << '\n';
      }

   }

	while(claveIngr != clave && intentos < 3 )
	{
      cout<<"La clave ingresada no es correcta\n";
      cout<<"Ingre nuevamente la clave\n";
      cin>>claveIngr;
      intentos ++;
	}
   if(claveIngr == clave){
      cout<<"A ingrasado con exito\n";
      cout<<"1) consulta de saldo\n";
      cout<<"2) Realizar retiro \n";
      cout<<"3) Pago de servicios \n";
      cout<<"4) Salir \n";
      cin>>seleccion;

       switch ( seleccion )
      {
         case 1:
            consultar(saldo);
            break;
         case 2:
      		cout<<"cuanto desea retirar\n";
            cin>>sPedido;
            if(sPedido < saldo){
         		cout<<"Su nhuevo saldo es $";
               cout<< saldo - sPedido;
            }
            else{
              cout<<"saldo insuficiente\n";
            }
            break;
         case 3:
         	cout<<"Debe $40000 desea pagar $";
            cout<< saldo - sPedido;
            break;
         case 4:
            break;
         default:
         	cout<<"default";
         ;
      }
      getch();
   }else{
   	cout<<"A exedido el numero de intentos la cuenta ha sido bloqueada";
      getch();
   }
}
