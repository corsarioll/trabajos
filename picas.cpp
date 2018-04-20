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
   int games,numbers[4],randoNum[4],test;
	cout <<"ingrese la cantidad de veces que quiere jugar\n";
   cin >>games;
   randoNum[0]=1;
   randoNum[1]=2;
   randoNum[2]=3;
   randoNum[3]=4;
   for(int i = 0;i<games;i++){
   	cout << "este es tu ";
      cout << (i + 1);
      cout << " juego\n";
      for(int e = 0;e<4;e++){
      	cout << "ingrese ";
      	cout << (e + 1);
      	cout << " numero\n";
      	cin  >> numbers[e];
         for(int a = 0;a<e;a++){
         	while(numbers[e] ==  numbers[a]){
            	cout << "dentro the el fuking while -------------- \n";
               cout << "por favor ingrese un numero que no este repetido \n";
               cin  >> numbers[e];
            }
         }
      }
      for(int e = 0;e<4;e++){
      	if(numbers[e] == randoNum[e] ){
         	cout <<"fija\n";
         }
         else{
      		for(int o = 0; o < 4; o++){
         		if(numbers[e] == randoNum[o] ){
            		cout <<"pica\n";
            	}
         	}
         }
      }
   }
   getch();
}
