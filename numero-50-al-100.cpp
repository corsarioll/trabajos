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

      numero = rand() % (101 - 50) + 50;
      vector[i] = numero;
   	cout<< "\n";
   	copia[i] = vector[i]*0.5;
	}
   for(int i = 0;i<10;i++){
   	cout<<"numero entero\n";
      cout<<vector[i];
      cout<<"\n";
      cout<<"numero multiplicado por 0.5\n";
      cout<<copia[i];
      cout<<"\n";
   }
	getch();
}
