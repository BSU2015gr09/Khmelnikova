/* �������� ������������ �����*/
#include <iostream>
#include <clocale>
#include <cmath>
using std:: cout;
using std:: cin;
int main(){
	setlocale(LC_ALL, "Russian");
	int a=0, b=0, m=0, k=0, i=0;
	cout << "������� �����: " ;
	cin >> a;
	b = a;
	while (p>0) {
		m = b % 10;
		k = k * 10 + m;
		b = b / 10;
	}
	if (a == k){
		cout << "����� " << n << " ������������\n";
	}
	else {
		cout << "����� " << n << " ��������������\n";
	}
	return 0;
}