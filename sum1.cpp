/*Cумма цифр на четных и нечетных позициях */
#include <iostream>
#include <clocale>
#include <cmath>
using std:: cout;
using std:: cin;
int main(){
	setlocale(LC_ALL, "Russian");
    int a = 0, a1=0, a2=0, n1 = 0, n2=0;
cout << "Введите целое число: ";
cin >> a ;
a1=a, a2=a;
while (a1>0){
n1=n1 + a1 % 10;
a1 = a1 / 100;
}
a2 = a2 / 10;
while (a2>0){
n2=n2+a2%10;
a2=a2 / 100;
}
cout << "Сумма цифр четных позиций: " << n1 << "\n";
cout << "Сумма цифр нечетных позиций: " << n2 << "\n";


return 0;
}