#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <conio.h>

using namespace std;
int main(){
	
	int apuesta,selecion,computer;
	computer = rand(); 
	cout<<"Bienvenido al juego piedra papel o tijera\n";
	cout<<"haga su apuesta\n";
	cin>>apuesta;
	cout<<"\n";
	cout<<" su apuesta es $";
	cout<<apuesta;
	cout<<"\n";
	cout<<"selecione una opccion\n";
	cout<<"\n";
	cout<<"1- piedra\n";
	cout<<"2- papel\n";
	cout<<"3- tijeras\n";
	cout<<"\n";
	cin>>selecion;
	cout<<"\n";
	cout<<computer;
	cout<<"\n";
	cout<<"su eleccion\n";

	if(selecion > 3 || selecion ){
		
	}
   
   	else if(computer == selecion){
        cout<<"\n";
        cout<<"Empate";
   	}
   	
	   
	   else if(selecion != computer){
    
		if(selecion == 1 && computer == 2){
			cout<<"gana la casa";
		}
		else if(selecion ==1 && computer == 3){
			cout<<"Usted gana : ";
			cout<<apuesta * 2;
		}
		
		if(selecion == 2 && computer ==3){
			cout<<"gana la casa";
		}
		else if(selecion ==2 && computer ==1){
			cout<<"Usted gana : ";
			cout<<apuesta * 2;
		}
		
		if(selecion == 3 && computer ==1){
			cout<<"gana la casa";
		}
		else if(selecion == 3 && computer == 2){
			cout<<"Usted gana : ";
			cout<<apuesta * 2;	
		}
		
   }

   getch();
}

int comparation(){

}
