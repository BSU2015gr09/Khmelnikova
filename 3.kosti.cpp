/*Игра в кости с компьютером*/
#include <iostream>
#include <clocale>
#include <cstdio> 
#include <cstdlib>
#include <ctime>
#include <iomanip>
using std:: cout;
using std:: cin;
int main (){
	setlocale(LC_ALL, "Russian"); 
	srand(time(0));
	int a=0, b=0, res1=0, res2=0;
	char x;
	cout << "Вы хотите сыграть? (y/n)" << "\n";
	cin >> x;
	if (x=='y'){
		a=rand()%6+1;// а зачем ДВЕ перемнные то для кубика? Одной обойтись нельзя???
        b=rand()%6+1;
		cout << "Ваш ход:" << "\n";
		switch (a){
		case (1): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (2): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "| o o |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (3): cout << "-------" << "\n";
			      cout << "|o    |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|    o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (4): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
	    case (5): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (6): cout << "-------" << "\n";
			      cout << "|o o o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o o o|" << "\n";
				  cout << "-------" << "\n";
				  break;}
		cout << "\n\n\n"; 
		switch (b){
		case (1): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (2): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "| o o |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (3): cout << "-------" << "\n";
			      cout << "|o    |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|    o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (4): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
	    case (5): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (6): cout << "-------" << "\n";
			      cout << "|o o o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o o o|" << "\n";
				  cout << "-------" << "\n";
				  break;}
		res1=a+b;
		a=rand()%6+1;// а зачем ДВЕ перемнные то для кубика? Одной обойтись нельзя???
        b=rand()%6+1;
		cout << "Ход компьютера:" << "\n";
		switch (a){
		case (1): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (2): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "| o o |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (3): cout << "-------" << "\n";
			      cout << "|o    |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|    o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (4): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
	    case (5): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (6): cout << "-------" << "\n";
			      cout << "|o o o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o o o|" << "\n";
				  cout << "-------" << "\n";
				  break;}
		cout << "\n\n\n"; 
		switch (b){
		case (1): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (2): cout << "-------" << "\n";
			      cout << "|     |" << "\n";
			      cout << "| o o |" << "\n";
				  cout << "|     |" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (3): cout << "-------" << "\n";
			      cout << "|o    |" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|    o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (4): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
	    case (5): cout << "-------" << "\n";
			      cout << "|o   o|" << "\n";
			      cout << "|  o  |" << "\n";
				  cout << "|o   o|" << "\n";
				  cout << "-------" << "\n";
				  break;
		case (6): cout << "-------" << "\n";
			      cout << "|o o o|" << "\n";
			      cout << "|     |" << "\n";
				  cout << "|o o o|" << "\n";
				  cout << "-------" << "\n";
				  break;}
		res2=a+b;
		cout << "\n\n";
		if (res1==res2){
			cout << "НИЧЬЯ!" << "\n";}
		if (res1<res2){
			cout << "ВЫ ПОБЕДИЛИ!" << "\n";}
		if (res1>res2){
			cout << "ВЫ ПРОИГРАЛИ." << "\n";}
	}
		return 0;
}
	
