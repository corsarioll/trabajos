#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>

using namespace std;

int main(){
	int foo [5];
	int mil, dos,  cinco,diez,veinte, cincuenta, cien;
   int Mcincuenta, Mcien, Mdoscientos, Mquinientos;
   int totalBilletes, totalMonedas;
   int pass,userpasss;
   int conversion,totalDinero;
   int dolar = 2932;
   int euro = 3468;
   int bitcoint  = 17050373;
   int pesoMexicano = 161;

   pass = 1234;
	cout<<"cuantos billetes de mil tieme ?\n";
   cin>>mil;
   cout<<"cuantos billetes de dosmil tieme ?\n";
   cin>>dos;
   cout<<"cuantos billetes de cinco mil tieme ?\n";
   cin>>cinco;
   cout<<"cuantos billetes de diez mil tieme ?\n";
   cin>>diez;
   cout<<"cuantos billetes de veinte mil tieme ?\n";
   cin>>veinte;
   cout<<"cuantos billetes de cincuenta mil tieme ?\n";
   cin>>cincuenta;
   cout<<"cuantos billetes de cien mil tieme ?\n";
   cin>>cien;

   cout<<"cuantas monedas de cincuenta tiene ?\n";
   cin>>Mcincuenta;
   cout<<"cuantas monedas de cien tiene ?\n";
   cin>>Mcien;
   cout<<"cuantas monedas de doscientos tiene ?\n";
   cin>>Mdoscientos;
   cout<<"cuantas monedas de quinientos tiene ?\n";
   cin>>Mquinientos;

	/*esta es la zona donde se suma*/

   totalBilletes = (mil * 1000) + (dos * 2000) + (cinco*5000) + (diez * 10000)+ (veinte * 20000) + (cincuenta * 50000) + (cien * 100000);
   totalMonedas = (Mcincuenta * 50) +(Mcien * 100) + (Mdoscientos*200) + (Mquinientos * 500);
   totalDinero = totalBilletes +  totalMonedas;
   cout<<" su Total en billetes es \n";
   cout<< totalBilletes;
   cout<<"\n";

   cout<<" su Total en monedas es \n";
   cout<< totalMonedas;
   cout<<"\n";

	/* Zona de converciones*/
   cout<<"ingrese la contraseña \n";
   cin>>userpasss;
   if(userpasss != pass){
   	cout<<"contraseña invalida";
   }
   else{
   	cout<<"quiere convertir su dinero en \n" ;
      cout<<"1-dolares\n" ;
      cout<<"2-euros\n" ;
      cout<<"3 bitcoint\n" ;
      cout<<"4-peso mexicano\n" ;
      cin>>conversion;

   	 switch ( conversion )
      {
      	case 1:
         	cout<<"su total en dolares es ";
         	cout<<totalDinero/dolar;
         break;
      	case 2:
         	cout<<"su total en euros es ";
         	cout<<totalDinero/euro;
         break;
         case 3:
         	cout<<"su total en bitcoint es ";
         	cout<<totalDinero/bitcoint;
         break;
         case 4:
         	cout<<"su total en bitcoint es ";
         	cout<<totalDinero/pesoMexicano;
         break;
         default:
         	cout<<"ingresoun numeroinvalido  ";
      }


   }
   getch();
}
