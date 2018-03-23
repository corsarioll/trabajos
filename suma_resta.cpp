#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int matrix[5][5],segunda[5][5];
   int resultado[5][5];
   int seleccion = 0;
	cout<<"hola";

   for(int i = 0;i<5;i++){

      for(int j = 0;j<5;j++){
   		matrix[j][i]= rand() % 10+1;
         segunda[j][i] = rand()% 10+1;
         cout<<matrix[j][i];
         cout <<"\n";
      }
   }
   cout<<"seleccione una opcion\n";
   cout<<"escriba 1 para sumar\n";
   cout<<"escriba 2 para multiplicar\n";
   cout<<"escriba 3 para salir\n";
   cin>>seleccion;
   cout <<"\n";
   while(seleccion == 3 ){
     switch ( seleccion ){
   		case 1:
         	for(int i = 0;i<5;i++){
      			for(int j = 0;j<5;j++){
   					matrix[j][i] = matrix[j][i] + segunda[j][i];
         			cout<<matrix[j][i];
         			cout <<"\n";
      			}
   			};
         break;
         case 2:
         	for(int i = 0;i<5;i++){
      			for(int j = 0;j<5;j++){
   					resultado[j][i] = matrix[j][i] * segunda[j][i];
         			cout<<resultado[j][i];
         			cout <<"\n";
      			}
   			};
         break;

     }
   }
  	getch();
}
