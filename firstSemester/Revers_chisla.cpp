/*Записать число наоборот*/
#include <iostream>
#include <clocale>
#include <cmath>
using std:: cout;
using std:: cin;
int main(){
	setlocale(LC_ALL, "Russian");
    int number = 0, p = 0, k = 0, m = 0;
	cout << "Введите число ";
	cin >> number;
	p = number;
	while (p>0) {
		k = p % 10;
		m = m * 10 + k;
		p = p / 10;
	}
	cout <<  "Реверс числа " << number << ":" << m << "\n";
	return 0;
}