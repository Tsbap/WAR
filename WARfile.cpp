#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <mmsystem.h>

using namespace std;

void regrasInicio(){
	cout << "\n\n\t::::::::::::::::::::::::::::::REGRAS::::::::::::::::::::::::::::::" << endl;
	cout << "\n\t1.No inicio do jogo os 18 paises serao sorteados e divididos\n\t igualmente entre a quantidade de players." << endl;
	cout << "\n\t2.O vencedor sera decidido pelo que dominar todos os paises." << endl;
	cout << "\n\t3.Todo inicio de rodada o jogador recebera uma quantidade de\n\t tropas referente a metade do numero de paises dominados." << endl;
	cout << "\n\t4.O jogador podera apenas atacar quando tiver mais de um exercito\n\t e fizer fronteira com o pais inimigo." << endl;
	cout << "\n\t5.Durante seu ataque o jogador jogará uma quantidade de dados\n\t referentes ao numero de exercitos -1, sendo o maximo 3 dados." << endl;
	cout << "\n\t6.Na defesa, o jogador jogara uma quantidade de dados referentes\n\t ao numero de exercitos, sendo o maximo 3 dados." << endl;
	cout << "\n\n\t\tPressione BACKSPACE para retornar ou ENTER para continuar." << endl;
}

int numeroPlayers;

int telaInicio(){
	
	
	string str = "\tNumero invalido de players";
	int c;
	
	char aux2;
	
	
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
	
	char aux;
	cout<<"\n\n\t\t\tPress ENTER to start..."<<endl;
	
	do{
		aux=getch();
	
	}while(aux!=13);
	
	char aux3=8;
	
	while(aux3 ==8  && aux3!=13){
		system("cls");
		telaInicio();
		Sleep(1000);
		system("cls");
		regrasInicio();
		aux3=getch();
		fflush(stdin);
		
	}
	system("cls");
	cout << "\thello world" << endl;
	
	return 0;
}
