#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>

using namespace std;
int main(){
	int a,b,factorial;
	cout << "Este programa calculara el factorial del numero entero que ingrese \nPor favor ingrese su numero " <<endl;
   cin >> a;
   factorial=1;
   for (b=1 ; b<=a ; b++)
   {
   	factorial=b*factorial;
      cout<<  factorial<<endl;
   }
   cout << "El factorial del numero ingresado es " <<factorial<<endl;
   getch();
}
