#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>
#include <stdlib.h>     /* srand, rand */

using namespace std;

int main(){
   int vector[10], numero;
   float copia[10];

   for(int i = 0;i<10;i++){
		cout<<"dijite un numero\n";
      cin>>numero;
      vector[i] = numero;
	}
   if(vector[5] > 0){
   	cout<<"el numero en la 5ta posicion es positivo\n";
   }else{
      cout<<"el numero en la 5ta posicion no es positivo\n";
   }
   if(vector[0] > 0){
   	cout<<"el numero en la primera posicion es positivo\n";
   }else{
      cout<<"el numero en la primera posicion no es positivo\n";
   }

   if(vector[9] == 0){
   	cout<<"el numero en la ultima posicion es cero\n";
   }else{
      cout<<"el numero en la ultima posicion no es cero\n";
   }

	getch();
}
