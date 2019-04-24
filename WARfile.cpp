#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <mmsystem.h>

using namespace std;

void regrasInicio(){
	cout << "" << endl;
}

int numeroPlayers;

int telaInicio(){
	
	string str = "\tNumero invalido de players";
	char aux2;
	int c;
	cout<<"\n\n\t\t\tPress space to start..."<<endl;
	char aux;
	do{
		aux=getch();
	
	}while(aux!=32);
	
	system("cls");
	system("color 02");
	cout << "\n\n";
	cout << "\toooooo   oooooo     oooo            .o.            ooooooooo.   " << endl;
	cout << "\t `888.    `888.     .8'            .888.           `888   `Y88. " << endl;
	cout << "\t  `888.   .8888.   .8'            .8\"888.           888   .d88' " << endl;
	cout << "\t   `888  .8'`888. .8'            .8' `888.          888ooo88P'  " << endl;
	cout << "\t    `888.8'  `888.8'            .88ooo8888.         888`88b.    " << endl;
	cout << "\t     `888'    `888'            .8'     `888.        888  `88b.  " << endl;
	cout << "\t      `8'      `8'            o88o     o8888o      o888o  o888o " << endl;
	
	
	cout <<"\n\n\tSelecione o numero de Players" << endl;	
	cout <<"\n\t2 Players" << endl;
	cout <<"\n\t3 Players" << endl;
	fflush(stdin);
	
	cout << "\n\n";
	
	do{
	
		aux2=getch();
	
		switch(aux2){
			case 50:
				cout << "\t2 Players selecionados        " << endl;
				return numeroPlayers=2;
				break;
			case 51:
				cout << "\t3 Players selecionados        " << endl;
				return numeroPlayers=3;
				break;		
			default:
				cout << str;
				cout << string(str.length(),'\b');
				break;	
		}
		
	}while(aux2!=50 && aux2!=51);
	

	
	
	
}

int main(void){
	telaInicio();
	Sleep(1000);
	
	
	
	
	
	return 0;
}

