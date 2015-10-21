/*Решить квадратное уравнение. Использовать конструкцию switch-case*/
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double  a=0, b=0, c=0, dis=0, a1=0, a2=0;

	cout << "Введите a ";
		cin >> a;
	cout << "Введите b ";
	    cin >> b;
	cout << "Введите c ";
	    cin >> c;
	dis=(b*b)-(4*a*c);
	switch ((int)a){
	case 0: 
		switch ((int)b){
		case 0: cout << "Решением этого уравнения является любое число" << "\n"; break;
		default: a1=(-c)/b; cout << "Корень уравнения: " << a1 << "\n"; break; }; break;
	default: 
		switch ((int)dis){
		case 0: a1=(-b)/(2*a); cout << "Существует единственный корень: "<< a1 << "\n"; break;
		default: if (dis>0){
			dis=sqrt(dis);
		a1=((-b)-dis)/(2*a);
		a2=((-b)+dis)/(2*a);
		cout << "Первый корень уравнения: "<< a1 << "\n" << "Второй корень уравнения: " << a2 << "\n";}
				 if (dis<0){
		cout << "Первый корень уравнения: " << (-b)/2 << "+" << (sqrt(-dis))/2 << "*i"  << "\n"; 
		cout << "Второй корень уравнения:  " << (-b)/2 << "-" << (sqrt(-dis))/2 << "*i" << "\n";} ; break;  }; break;
	}
		return 0;
		}