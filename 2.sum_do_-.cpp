/*Вводятся числа до первого отрицательного, выводится их сумма*/
#include <iostream>
#include <clocale>
using std:: cout;
using std:: cin;
int main(){
	setlocale(LC_ALL, "Russian");
	int number=0, sum=0;
	while (number>=0){
		sum=sum+number;
		cout << "Введите число ";
		cin >> number;}
	cout << "Сумма чисел равна " << sum << "\n";

       return 0;
	}