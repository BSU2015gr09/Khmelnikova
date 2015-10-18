/*Решить квадратное уравнение*/
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float a=0, b=0, c=0, dis=0, a1=0, a2=0;
	cout << "Введите a ";
		cin >> a;
	cout << "Введите b ";
	    cin >> b;
	cout << "Введите c ";
	    cin >> c;
	dis=(b*b)-(4*a*c);
	if (a!=0){
	if (dis==0){
		a1=(-b)/(2*a);
		
		cout << "Существует единственный корень: "<< a1 << "\n";
		}
	
	if (dis>0){
		dis=sqrt(dis);
		a1=((-b)-dis)/(2*a);
		a2=((-b)+dis)/(2*a);
		cout << "Первый корень уравнения: "<< a1 << "\n" << "Второй корень уравнения: " << a2 << "\n"; }
	
	
	if (dis<0){
		cout << "Первый корень уравнения: " << (-b)/2 << "+" << (sqrt(-dis))/2 << "*i"  << "\n"; 
		cout << "Второй корень уравнения:  " << (-b)/2 << "-" << (sqrt(-dis))/2 << "*i" << "\n";
		
	}
	}
	if (a==0){ 
	a1=(-c)/b;
	cout << "Корень уравнения: " << a1 << "\n";}
	return 0;
	}