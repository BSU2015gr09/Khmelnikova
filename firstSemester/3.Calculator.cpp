/*Калькулятор. Обработка ситуации деления на 0. Результат вычислений остается как текущее значение. 
Если вместо операции ввести символ ’c’, то калькулятор сбрасывается в начало, 
при вводе символа ’e’ вместо операции калькулятор завершает работу (exit).*/
#include <iostream>
#include <clocale>
using std:: cout;
using std:: cin;
int main (){
	setlocale(LC_ALL, "Russian");
	int i=0;
	double x=0, y=0, res=0; 
    char a;
 while (i==0) {
	 i++;
  cout << "Введите первое число" << "\n";
  cin >> x;
  cout << "Введите операцию.Чтобы вернуться в начало введите с. Для выхода е. " << "\n";
  cin >> a;
  switch (a){
  case 'c': i=0; break;
  case 'e': i=3; break;
  default:
  cout << "Введите следующее число" << "\n";
  cin >> y;
  switch (a){
  case'+': res=x+y; cout << res << "\n"; break; 
  case'-': res=x-y; cout << res << "\n"; break;
  case'*': res=x*y; cout << res << "\n"; break;
  case'/': if (y==0){
  cout << "На ноль делить нельзя! Попробуйте заново." << "\n";
		   i=0;}
		   else if (y!=0){
			   res=x/y;
		   cout <<  res << "\n";};

	  break;
  }
  }
 
 
 while (i==1){
	 x=res;
	 cout << "Введите операцию.Чтобы вернуться в начало введите с. Для выхода е. " << "\n";
  cin >> a;
  switch (a){
  case 'c': i=0; break;
  case 'e': i=3; break;
  default:
  cout << "Введите следующее число" << "\n";
  cin >> y;
  switch (a){
  case'+': res=x+y; cout << res << "\n"; break; 
  case'-': res=x-y; cout << res << "\n"; break;
  case'*': res=x*y; cout << res << "\n"; break;
  case'/': if (y==0){
  cout << "На ноль делить нельзя!Попробуйте заново."<< "\n";
  i=0;}
               else if (y!=0){
			   res=x/y;
		   cout <<  res << "\n";};

	  break;
  }
  }
 }
 }
}
